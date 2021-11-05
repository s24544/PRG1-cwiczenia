#include <iostream>

int czy_pierwsza(int a)
{
	if(a == 2 || a == 3 || a == 5 || a == 7)
	{
		return 1;
	}
	else
	{
		if(a != 1 && a % 2 != 0 && a % 3 != 0)
			return 1;
		else
			return 0;
	}
}

int main()
{
	int a;
	int suma = 0;
	std::cout << "Podaj A: ";
	std::cin >> a;
	if(czy_pierwsza(a) == 1)
	{
		for(int i = a; i > 0; i--)
		{
			if(czy_pierwsza(i) == 1)
				{
					suma = suma + i;
				}
		}
		std::cout << suma << "\n";
	}


return 0;
}