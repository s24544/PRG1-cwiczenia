#include <iostream>
#include <string>
#include <vector>

struct group
{
    std::string nazwa;
    std::vector<std::string> studenci;
};

void add_student_to_group(group& przyklad, std::string& student)
{
    przyklad.studenci.push_back(student);
}

int main()
{
    std::string student = "Jan Kowalski";
    group przyklad = group{"13c"};
    add_student_to_group(przyklad, student);
    std::cout << przyklad.nazwa << ' ';
    for(auto element: przyklad.studenci)
    {
        std::cout << element;
    }
    return 0;
}
