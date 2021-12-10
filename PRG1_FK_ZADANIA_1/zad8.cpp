#include <iostream>
#include <string>

void print_n_element(std::string wyraz, int n)
{
    for(int i=0;i<wyraz.length();i += n)
        std::cout << wyraz[i];
}


int main()
{
    print_n_element("hello world", 4);
return 0;
}
