#include <iostream>
#include <vector>
#include <algorithm>

auto asum(int a[], int n) -> int
{
	int suma = 0;
	for (int i = 0 ; i < n; i++)
	{
		suma = suma + a[i];
	}

	return suma;
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
	std::cout << asum(a, n);
	return 0;
}