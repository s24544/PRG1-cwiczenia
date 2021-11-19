#include <iostream>
#include <string.h>

int main()
{
	char a[] = "Hello, World!";
	memset(a, '-' , 5);
	std::cout << a << "\n";
	return 0;
}