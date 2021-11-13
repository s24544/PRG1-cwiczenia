#include <iostream>
#include <vector>
#include <algorithm>

auto init(std::vector<int> a, int n) -> void
{
	for(int i = 0;i < n;i++)
	{
		a[i] = 0;
	}
	a.resize(n);
	for(int i = 0; i < n; i++)
	{
		std::cout << a[i] << "\n";
	}
}

int main()
{
	std::vector<int> a;
	int n = 10;
	init(a, n);
	return 0;
}