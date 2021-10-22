#include <iostream>
#include <random>

auto main() -> int
{
std::random_device rd;
std::uniform_int_distribution<int> losowanie(1, 100);
int los = losowanie(rd);
int a;

do
{
	std::cout << "guess: ";
	std::cin >> a;
	if(a == los)
	{
		std::cout << "just right!\n";
	}
	else
	{
		if(a > los)
		{
			std::cout << "too big!\n";
		}
		else
		{
			std::cout << "too small!\n";
		}
}
}while(a != los);
return 0;
}
