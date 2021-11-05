#include <iostream>

int main()
{
	int a, b;
	std::cout << "Podaj pierwszą liczbę: ";
	std::cin >> a;
	std::cout << "\n Podaj drugą liczbę: ";
	std::cin >> b;
	if(b > a)
	{
		for(int i = a;i < b; i++)
		{
			std::cout << i << "\n";
		}
	}
return 0;
}