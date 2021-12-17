#include <iostream>
#include <vector>
#include <algorithm>

double dot_product(std::vector<double> &vec1, std::vector<double> &vec2)
{
    if(vec1.size() != vec2.size())
    {
        return 0;
    }
    else {
        double scalar = 0;
        for (int i = 0; i < vec1.size(); i++)
        {
            scalar += vec1[i]*vec2[i];
        }
        return scalar;
    }
}

int main()
{
    std::vector<double> essa = {15.2, 33.33, 120.11, 99.99};
    std::vector<double> example = {10.10, 11.11, 12.12, 13.13};
    std::cout << dot_product(essa, example);
    return 0;
}
