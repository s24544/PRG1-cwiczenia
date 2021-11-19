#include <iostream>
#include <string.h>


int main()
{
	char a[] = "abcd";
	char b[] = "efgh";
	std::cout << a << "\n"; //abcd
	memcpy(a, b, 4);
	std::cout << a << "\n"; //efgh
	return 0;
}