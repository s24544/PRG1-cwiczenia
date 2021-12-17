#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool contains_all(std::vector<std::string>& vec1, std::vector<std::string>& vec2)
{
    bool contain = false;
    int elements = 0;
    if(vec2.size() > vec1.size())
        return contain;
    else
    {
        for(auto& i : vec2)
        {
            if (std::find(vec1.begin(), vec1.end(), i) != vec1.end())
                elements += 1;
        }
        if(elements == vec2.size())
            contain = true;
    }
   return contain;
}

int main()
{
    std::vector<std::string> vec1 = {"Ala", "ma", "kota"};
    std::vector<std::string> vec2 = {"Ala", "nie ma", "kota"};
    std::cout << contains_all(vec1, vec2);
    return 0;
}
