#include <iostream>
#include <vector>
#include <algorithm>


auto init(std::vector<int> a, int n) -> void
{
	a.resize(n);
	for(int i = 0;i < n;i++)
	{
		a.push_back(0);
	}
}

int main()
{
	std::vector<int> a;
	int n = 10; 
	init(a, n);
	std::cout << a[1];
	return 0;
}