#include <iostream>
#include <algorithm>
#include <vector>

int partition(int a[], int l, int h)
{
	int pivot = a[h];
	int i = (l - 1);

	for(int j = l; j <= h - 1; j++)
	{
		if(a[j] <= pivot)
		{
			i++;
			std::swap(a[i], a[j]);
		}
	}
	std::swap(a[i + 1], a[h]);
	return (i + 1);
}


void quicksort(int a[], int l, int h)
{
	if(l < h)
	{
		int partindex = partition(a, l, h);
		quicksort(a, l, partindex - 1);
		quicksort(a, partindex + 1, h);
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
	quicksort(a, 0, n-1);
	for(int i = 0; i < n; i++)
	{
		std::cout << a[i] << "\n";
	}
	return 0;
}