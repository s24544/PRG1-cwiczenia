#include <iostream>
#include <random>

void mem_rand(void* s, size_t n)
{
	char* s_wsk = (char*)s;
	std::random_device rd;
	std::uniform_int_distribution<int> rand_byte(0, 255);
	for(size_t i = 0; i < n; i++)
	{
		*(s_wsk+i) = rand_byte(rd);
	}
}


int main()
{
	char a[255];
	int n = sizeof(a);
	mem_rand(a, n);
	for(int i = 0; i < n; i++)
	{
		std::cout << a[i] << " ";
	}
	std::cout << "\n";
	return 0;
}