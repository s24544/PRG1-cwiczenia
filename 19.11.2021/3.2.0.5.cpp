#include <iostream>
#include <string.h>

void mem_cpy(void* a, void* b, size_t ilosc)
{
	char* a_wsk = (char*)a;
	char* b_wsk = (char*)b;
	for(size_t i = 0; i < ilosc; i++)
	{
		*(a_wsk + i) = *(b_wsk + i);
	}
}

int main()
{
	char a[] = "abcd";
	char x[] = "efgh";
	int dlugosc = strlen(a);
	int ilosc = 4;
	mem_cpy(a, x, ilosc);
	for(int i = 0; i < dlugosc; i++)
	{
		std::cout << a[i] << " ";
	}
	std::cout << "\n";
	return 0;
}