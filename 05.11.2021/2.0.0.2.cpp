#include <iostream>

int main()
{
	int a, b, c;
	std::cout << "Podaj A: ";
	std::cin >> a;
	std::cout << "\n";
	std::cout << "Podaj B: ";
	std::cin >> b;
	std::cout << "\n";
	do
	{
		std::cout << "Podaj C (większe od 0): ";
		std::cin >> c;
	}while(c<=0);
	std::cout << "\n";
	if(b > a)
	{
		for(int i = a;i < b; i++)
		{
			if(i % c == 0)
				std::cout << i << " ";
		}
	}
return 0;
}