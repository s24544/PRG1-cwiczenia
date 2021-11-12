#include <iostream>
#include <algorithm>
#include <vector>

auto amax(std::vector<int> a, int n) -> int
{
	int indeks, max;
	a.resize(n);
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
	std::vector<int> a = {42, 9, -1, 18, 59, 3, 101, 31, 72, 12};
	int n = 10;
	std::cout << amax(a, n);
	return 0;
}