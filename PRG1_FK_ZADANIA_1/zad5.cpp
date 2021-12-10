#include <iostream>

bool is_even(int n)
{
    if(n % 2 == 0)
        return true;
    else
        return false;
}

int main() 
{
    std::cout << is_even(4);
    return 0;
}
