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

auto average_of(Student &przyklad)
{
    double srednia = 0;
    for(auto element: przyklad.oceny)
    {
        srednia += element;
    }
    srednia = srednia/przyklad.oceny.size();
    return srednia;
}

int main()
{
    std::vector<double> oceny = {3.5, 4.0, 3.0, 2, 5.0};
    std::string imie = "Jan";
    std::string nazwisko = "Kowalski";
    Student przyklad = Student{imie, nazwisko, oceny};
    std::cout << average_of(przyklad);
    return 0;
}
