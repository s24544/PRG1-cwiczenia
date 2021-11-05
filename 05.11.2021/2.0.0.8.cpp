#include <iostream>


int main()
{
	int a;
	std::cout << "Podaj A: ";
	std::cin >> a;
	int suma = a;
	for(int i = 0;i < a; ++i)
	{
		if(i != 1 && i != 0)
		{
			suma = suma * i;
		}
	}
	std::cout << suma << "\n";
}