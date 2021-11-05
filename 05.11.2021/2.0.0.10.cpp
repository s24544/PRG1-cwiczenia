#include <iostream>

int main()
{
	int i;
	std::cout << "Podaj liczbę: ";
	std::cin >> i;
	int suma = i;
	do
	{
		if(i != 1)
		{
			suma = suma * (i -1);
		}

	i--;
	}while(0 < i);
	std::cout << suma << "\n";
}