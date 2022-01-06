#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

struct student
{
    std::string imie;
    std::string nazwisko;
    std::vector<double> oceny;
    student() = default;
};

struct group {
    std::string nazwa;
    std::vector<student> studenci;
};

auto mediana(std::vector<double>& oceny)
{
    double median;
    std::sort(oceny.begin(), oceny.end());
    if(oceny.size() % 2 != 0)
        median = oceny[int(oceny.size()/2)+1];
    else
        median = oceny[int(((oceny.size()/2))+int((oceny.size()/2)+1))/2];

    return median;
}

group best_group_name(std::vector<group> gr)
{
    double m, max = 0;
    int best_gr = 0;
    for (int i=0;i<gr.size();i++)
    {
        group g = gr[i];
        std::vector<double> oceny_grupy={};

        for (auto & j : g.studenci)
        {
            for (double ocena : j.oceny)
            {
                oceny_grupy.push_back(ocena);
            }
        }
        m = mediana(oceny_grupy);
        if (m>max)
        {
            max = m;
            best_gr = i;
        }

    }
    return gr[best_gr];
}



int main() {
    student s1 = {"Jan", "Kowalski", {3, 5, 3.5, 4, 5, 2, 2}};
    student s2 = {"Mateusz", "Nowak", {2, 2, 2, 3, 5, 5, 5}};
    student s3 = {"Anna", "Kowalska", {5, 2, 2, 2, 2, 2, 2}};
    student s4 = {"Andrzej", "Dąbrowski", {2, 2, 2, 4.5, 5, 3.5, 2}};
    student s5 = {"Barbara", "Rogalska", {5, 2, 2, 2, 2, 2, 2}};
    student s6 = {"Miłosz", "Tusiński", {5, 5, 5, 5, 5, 5, 5}};
    student s7 = {"Katarzyna", "Puchała", {5, 5, 5, 5, 5, 5, 5}};
    student s8 = {"Herman", "Muller", {2, 3.5, 4, 5, 5, 5, 5}};
    student s9 = {"Artur", "Jędrzejczyk", {5, 5, 5, 5, 5, 5, 5}};

    group grupa1 = {"Grupa 1", {s1, s2, s3}};
    group grupa2 = {"Grupa 2", {s4, s5}};
    group grupa3 = {"Grupa 3", {s6, s7, s8, s9}};

    std::vector<group> all_groups = {grupa1, grupa2, grupa3};
    group best_group = best_group_name(all_groups);
    std::cout << best_group.nazwa;

    return 0;
}
