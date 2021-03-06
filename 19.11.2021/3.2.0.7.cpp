#include <iostream>

void mem_rev(void* s, size_t n)
{
    char* a = (char*) s;
    char* b = new char[n];
    for(size_t i = 0, j=n-1;i<n; i++)
    {
        *(b+i) = *(a+j);
        j = j - 1;
    }
    for(size_t i = 0;i < n;i++)
    {
        *(a+i) = *(b+i);
    }
}

int main() {
    char a[] = "Hello, World!";
    for(char i : a)
        std::cout << i; //print przed
    std::cout << "\n";
    mem_rev(a, sizeof(a));
    for(char i : a)
        std::cout << i; //print po uzyciu funkcji

    return 0;
}
