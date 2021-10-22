#include <iostream>

void cout_piwa(int i)
	{
		if(i != 1)
		{
			std::cout << i << " bottles of beer on the wall " << i << " bottles of beer.\n";
			std::cout << "Take one down, pass it around\n";
		}
		else
		{
			std::cout << i << " bottle of beer on the wall " << i << " bottle of beer.\n";
			std::cout << "Take one down, pass it around\n";
			std::cout << "No more bottles of beer on the wall, no more bottles of beer.\n";
			std::cout << "Go to the store and buy some more, 99 bottles of beer on the wall...\n";
		}
	}

auto main(int argc, char *argv[]) -> int
{
	if(argc > 1)
	{
		int liczba = atoi(argv[1]);
		for(int i = liczba; i >0; i--)
		{
			cout_piwa(i);
		}
	}
	else
	{
		for (int i = 99; i > 0; i--)
		{
			cout_piwa(i);
		}
	}
	return 0;
}
