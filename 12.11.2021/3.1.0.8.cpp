#include <iostream>
#include <algorithm>
#include <vector>

auto sort_asc(int a[], int n) -> void
{
	for(int i = 0;i < n; i++)
	{
		for(int j = 0; j < n - 1; j++)
		{
				if(a[j] < a[j + 1])
				{
					std::swap(a[j], a[j+1]);
				}
		}
	}
	for(int i = 0; i < n; i++)
	{
		std::cout << a[i] << "\n";
	}
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
	sort_asc(a, n);
	return 0;
}