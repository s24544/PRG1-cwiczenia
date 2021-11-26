#include <iostream>
#include <string.h>


void mem_set(void* x, int ch, size_t ilosc)
{
	char* wsk = (char*) x;
	for(size_t i = 0; i < ilosc; i++)
	{
		*(wsk+i) = ch;
	}
}


int main()
{
	char a[] = "Hello, World!";
	char x = '-';
	int n = 5;
	int dlugosc = strlen(a);
	mem_set(a, x, n);
	for(int i = 0; i < dlugosc; i++)
	{
		std::cout << a[i] << " ";
	}
	std::cout << "\n";
	return 0;
}