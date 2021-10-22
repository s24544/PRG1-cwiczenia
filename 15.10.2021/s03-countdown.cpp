#include <iostream>

auto main(int argc, char *argv[]) -> int
{
	int a = atoi(argv[1]);
	if (argc !=2)
	{
		std::cout << "nieprawidłowe dane\n";
		return 1;
	}
	else
	{
		if (a > 0)
		{
			for(int i = a; i >= 0; i--)
			{
				std::cout << i << "\n";
			}
		}
		else
		{
			for(int i = a; i <= 0; i++)
			{
				std::cout << i << "\n";
			}
		}
		return 0;
	}
}
