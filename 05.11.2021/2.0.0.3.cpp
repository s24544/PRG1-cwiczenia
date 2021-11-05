#include <iostream>

int main()
{
	int a, b, s;
	std::cout << "Podaj A: ";
	std::cin >> a;
	std::cout << "\n";
	std::cout << "Podaj B: ";
	std::cin >> b;
	std::cout << "\n";
	do
	{
		std::cout << "Podaj S: ";
		std::cin >> s;
	}while(s == 0);
	if(b > a)
	{
		if(s > 0)
		{
			for(int i = a;i < b; i = i + s)
			{
				std::cout << i << "\n";
			}
		}
		else
		{
			for(int i = b - 1; i >= a; i = i + s)
			{
				std::cout << i << "\n";
			}
		}
	}
return 0;
}