#include <iostream>
#include <algorithm>
#include <vector>

int partition(std::vector<int> &a, int l, int h)
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


void quicksort(std::vector<int> &a, int l, int h)
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
	std::vector<int> a = {42, 9, -1, 18, 59, 3, 101, 31, 72, 12};
	int n = 10;
	quicksort(a, 0, n-1);
	for(int i = 0; i < n; i++)
	{
		std::cout << a[i] << "\n";
	}
	return 0;
}