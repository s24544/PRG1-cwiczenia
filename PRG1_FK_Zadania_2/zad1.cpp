#include <iostream>
#include <vector>

double average_of(const std::vector<float>& vec)
{
    double srednia = 0;
    for(auto element: vec)
    {
        srednia += element;
    }
    srednia = srednia/vec.size();
    return srednia;
}

int main()
{
    std::vector<float> essa = {33.33, 33.33, 555.51, 71.19};
    std::cout << average_of(essa);

    return 0;
}
