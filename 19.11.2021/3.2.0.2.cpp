#include <iostream>

int print(std::string &a)
{
	auto a_pointer = &a;
	std::cout << &a << " = " << *a_pointer << "\n";
	return 0;
}



int main()
{
	std::string a = "Hello, World!";
	print(a);
	return 0;
}