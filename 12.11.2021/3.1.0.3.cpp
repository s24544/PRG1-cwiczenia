#include <iostream>
#include <vector>
#include <algorithm>

auto asum(std::vector<int> a, int n) -> int
{
	int suma = 0;
	a.resize(n);
	for (int i = 0 ; i < n; i++)
	{
		suma = suma + a[i];
	}

	return suma;
}

int main()
{
	std::vector<int> a = {42, 9, -1, 18, 59, 3, 101, 31, 72, 12};
	int n = 10;
	std::cout << asum(a, n);
	return 0;
}