#include <iostream>
#include <algorithm>
#include <vector>

auto amax(int a[], int n) -> int
{
	int indeks, max;
	max = a[0];
	for (int i = 0 ; i < n; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
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
	std::cout << amax(a, n);
	return 0;
}