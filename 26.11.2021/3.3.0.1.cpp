#include <iostream>
#include <random>
auto call_with_random_int(void (*fp)(int const)) -> void
{
    std::random_device rd;
    std::uniform_int_distribution<int> rand_int(1, 1000);
    int a = rand_int(rd);
    (*fp)(a);
}

void somefunction(const int a)
{
    std::cout << a << "\n";
}

int main()
{
    void (*fp)(const int) = &somefunction;
    call_with_random_int(fp);
    return 0;
}
