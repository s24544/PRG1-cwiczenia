#include <iostream>
#include <algorithm>
#include <vector>

auto sort_asc(std::vector<int> a, int n) -> void
{
	for(int i = 0;i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(a[j] > a[j + 1])
			{
				std::swap(a[j], a[j+1]);
			}
		}
	}
	for(int i = 0; i < n; i++)
	{
		std::cout << a[i] << "\n";
	}
}

int main()
{
	std::vector<int> a = {42, 9, -1, 18, 59, 3, 101, 31, 72, 12};
	int n = 10;
	sort_asc(a, n);
	return 0;
}