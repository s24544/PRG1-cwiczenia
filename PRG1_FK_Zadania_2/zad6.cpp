#include <iostream>
#include <string>
#include <vector>

struct Student
{
    std::string imie;
    std::string nazwisko;
    std::vector<double> oceny;
    Student() = default;
};

Student get_best_student(std::vector<Student>& students)
{
    std::vector<double> srednie{};
    for(auto element : students)
    {
        double srednia = 0.0;
        for(auto el : element.oceny)
            srednia += el;
        srednia /= element.oceny.size();
        srednie.push_back(srednia);
    }
    double max_srednia = 0.0;
    size_t index = 0;
    for(size_t i = 0;i<srednie.size();i++)
    {
        if(srednie[i] > max_srednia)
        {
            max_srednia = srednie[i];
            index = i;
        }
    }
    return students[index];
}

int main()
{
    Student przyklad1 = Student{"Jan", "Kowalski" , {3, 5, 3.5, 4, 5, 2, 2}};
    Student przyklad2 = Student{"Mateusz", "Nowak" , {2, 2, 2, 3, 5, 5, 5}};
    Student przyklad3 = Student{"Anna", "Kowalska" , {5, 2, 2, 2, 2, 2, 2}};
    Student przyklad4 = Student{"Andrzej", "Dąbrowski" , {3, 4, 2, 4.5, 5, 3.5, 2}};
    std::vector<Student> students = {przyklad1, przyklad2, przyklad3, przyklad4};
    std::cout << get_best_student(students).imie;
    return 0;
}
