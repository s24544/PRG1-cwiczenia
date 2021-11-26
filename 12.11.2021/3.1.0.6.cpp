#include <iostream>
#include <algorithm>
#include <vector>

auto search(int a[], int n, int needle) -> int
{
	int indeks = -1;
	for (int i = 0 ; i < n; i++)
	{
		if(a[i] == needle)
		{
			indeks = i;
		}
	}
return indeks;
}

int main()
{
	int a[100], n, element, needle;
	do
	{
		std::cout << "Podaj rozmiar tablicy (max 100): " << "\n";
		std::cin >> n;
		std::cout << "\nPodaj szukaną wartość: ";
		std::cin >> needle;
	}while(n <= 1 || n >= 100);
	for(int i = 0;i < n; i++)
	{
		std::cout << "\n";
		std::cout << "Podaj " << i << " element tablicy: ";
		std::cin >> element;
		a[i] = element;
	}
	std::cout << search(a, n, needle);
	return 0;
}