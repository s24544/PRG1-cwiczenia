#include <iostream>

int print(std::string* a)
{
	std::cout << a << " = " << *a << "\n";
	return 0;
}

int main()
{
	std::string a = "Hello, World!";
	std::string* a_wsk = &a;
	print(a);
	return 0;
}