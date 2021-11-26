#include <iostream>
#include <string.h>

void mem_frob(void* a, size_t ilosc)
{
	char* a_wsk = (char*)a;
	for(size_t i = 0; i < ilosc; i++)
	{
		*(a_wsk + i) ^= 42;
	}
}


int main()
{
	char a[] = "Hello, World!";
	int dlugosc = strlen(a);
	int ilosc = sizeof(a);
	
	for(int i = 0; i < dlugosc; i++)
	{
		std::cout << a[i] << " ";
	}
	std::cout << "\n";

	mem_frob(a, ilosc);

	for(int i = 0; i < dlugosc; i++)
	{
		std::cout << a[i] << " ";
	}
	std::cout << "\n";
	return 0;
}