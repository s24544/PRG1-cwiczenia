#include <iostream>
#include <string>

int main()
{
	std::string a = "Hello, World!";
	std::string *a_wsk = &a;
	std::cout << "Adres: " << &a << "\n";
	std::cout << "Wartość: " << *a_wsk << "\n";
	return 0;
}