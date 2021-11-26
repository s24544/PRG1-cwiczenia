#include <iostream>
#include <algorithm>
#include <vector>

auto amin(int a[], int n) -> int
{
	int indeks, min;
	indeks = 0;
	min = a[0];
	for (int i = 0 ; i < n; i++)
	{
		if(a[i] < min)
		{
			min = a[i];
			indeks = i;
		}
	}
	return indeks;
}

int main()
{
	int a[100], n, element;
	do
	{
		std::cout << "Podaj rozmiar tablicy (max 100): " << "\n";
		std::cin >> n;
	}while(n <= 1 || n >= 100);
	for(int i = 0;i < n; i++)
	{
		std::cout << "\n";
		std::cout << "Podaj " << i << " element tablicy: ";
		std::cin >> element;
		a[i] = element;
	}
	std::cout << amin(a, n);
	return 0;
}