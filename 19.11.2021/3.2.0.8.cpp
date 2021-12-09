#include <iostream>
#include <random>

void mem_rand(void* s, size_t n)
{
    char* s_wsk = (char*)s;
    std::random_device rd;
    std::uniform_int_distribution<int> rand_byte(0, 8);
    for (size_t i = 0; i < n; i++)
        *(s_wsk + i) = rand_byte(rd);
}


int main()
{
    char a[8];
    mem_rand(a, sizeof(a));
    for(char i : a)
        std::cout << i;
    return 0;
}
