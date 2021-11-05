#include <iostream>


int main()
{
	int limit, dzielnik;
	int suma = 0;
	std::cout << "Podaj limit: ";
	std::cin >> limit;
	std::cout << "\nPodaj dzielnik: ";
	std::cin >> dzielnik;

	for(int i = limit; i > 0; i--)
	{
		if(i % dzielnik == 0)
		{
			suma = suma + i;
		}
	}
	std::cout << suma << "\n";
}