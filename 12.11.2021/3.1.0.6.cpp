#include <iostream>
#include <algorithm>
#include <vector>

auto search(std::vector<int> a, int n, int needle) -> int
{
	int indeks = -1;
	for (int i = 0 ; i < n; i++)
	{
		if(a[i] == needle)
		{
			indeks = i;
		}
	}
return indeks;
}

int main()
{
	std::vector<int> a = {42, 9, -1, 18, 59, 3, 101, 31, 72, 12};
	int n = 10;
	int needle = 101;
	std::cout << search(a, n, needle);
	needle = 0;
	std::cout << search(a, n, needle);
	return 0;
}