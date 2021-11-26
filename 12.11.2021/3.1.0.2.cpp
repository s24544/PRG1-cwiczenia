#include <iostream>
#include <vector>
#include <algorithm>

auto iota(int a[], int n, int start) -> void
{
	for (int i = 0; i < start-1; i++)
	{
		a[i] = (i+start);
	}
	for(int i = 0; i < n; i++)
	{
		std::cout << a[i] << "\n";
	}
}

int main()
{
	int a[100], n, start;
	do
	{
		std::cout << "Podaj rozmiar tablicy (max 100): " << "\n";
		std::cin >> n;
		std::cout << "Podaj początek odliczania (start):\n";
		std::cin >> start;
	}while(n <= 1 || n >= 100);
	iota(a, n, start);
	return 0;
}