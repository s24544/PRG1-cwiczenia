#include <iostream>

bool is_divisible(int n, int d)
{
    if(n % d == 0)
        return true;
    return false;
}

bool is_even(int n)
{
    if(is_divisible(n, 2) == 1)
        return true;
    else
        return false;
}

int main()
{
    std::cout << is_even(4) << "\n";
    return 0;
}
