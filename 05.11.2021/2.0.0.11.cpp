#include <iostream>

int main(int argc, char* argv[])
{
	if(argc != 3)
	{
		std::cout << "Nieprawidłowa ilość argumentów\n";
		return 1;
	}
	else
	{
		int wysokosc = atoi(argv[1]);
		int dlugosc = atoi(argv[2]);

		for(int i = wysokosc; i > 0; i--)
		{
			for(int i = dlugosc; i > 0; i--)
			{
				std::cout << "*";
			}
			std::cout << "\n";
		}
	}
}