#include <iostream>
#include <vector>
#include <algorithm>

auto init(int a[], int n) -> void
{
	for(int i = 0;i < n;i++)
	{
		a[i] = 0;
	}
	for(int i = 0; i < n; i++)
	{
		std::cout << a[i] << "\n";
	}
}

int main()
{
	int a[100], n;
	do
	{
		std::cout << "Podaj rozmiar tablicy (max 100): " << "\n";
		std::cin >> n;
	}while(n <= 1 || n >= 100);
	init(a, n);
	return 0;
}