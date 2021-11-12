#include <iostream>
#include <vector>
#include <algorithm>

auto iota(std::vector<int> a, int n, int start) -> void
{
	a.resize(n);
	for (int i = 0; i < start -1; i++)
	{
		a.push_back(i+start);
	}
}

int main()
{
	std::vector<int> a;
	int n = 4;
	int start = 5;
	iota(a, n, start);
	std::cout << a[0];
	return 0;
}