#include <iostream>
#include <algorithm>
#include <vector>

auto amin(std::vector<int> a, int n) -> int
{
	int indeks, min;
	a.resize(n);
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
	std::vector<int> a = {42, 9, -1, 18, 59, 3, 101, 31, 72, 12};
	int n = 10;
	std::cout << amin(a, n);
	return 0;
}