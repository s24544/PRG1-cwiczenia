#include <iostream>

int main()
{
	int a;
	std::cout << "Podaj A: ";
	std::cin >> a;

	if(a == 2 || a == 3 || a == 5 || a == 7)
	{
		std::cout << a << " jest liczbą pierwszą\n";
	}
	else
	{
		if(a != 1 && a % 2 != 0 && a % 3 != 0)
		{
			std::cout << a << " jest liczbą pierwszą\n";
		}
		else
		{
			std::cout << a << " nie jest liczbą pierwszą\n";
		}
	}
return 0;
}