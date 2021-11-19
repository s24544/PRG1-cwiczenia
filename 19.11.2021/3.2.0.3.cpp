#include <iostream>
#include <algorithm>

void swap(int *a, int *b)
{
	std::swap(*a, *b);
}



int main()
{
	auto a = int{42};
	auto b = int{64};
	std::cout << "Przed zamianą: " << a << " " << b  << "\n";
	swap(&a, &b);
	std::cout << "Po zamianie: " << a << " " << b << "\n";
	return 0;
}