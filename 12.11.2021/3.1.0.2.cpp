#include <iostream>
#include <vector>
#include <algorithm>

auto iota(std::vector<int> a, int n, int start) -> void
{
	a.resize(n);
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
	std::vector<int> a;
	int n = 4;
	int start = 5;
	iota(a, n, start);
	return 0;
}