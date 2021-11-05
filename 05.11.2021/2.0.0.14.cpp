#include <iostream>


int main(int argc, char* argv[])
{
	if(argc != 2 || atoi(argv[1]) < 3)
	{
		std::cout << "Nieprawidłowe argumenty\n";
		return 1;
	}
	else
	{
		int bok = atoi(argv[1]);

		//podstawa górna
		for(int i = bok; 0 < i; i--)
		{
			std::cout << "*";
		}
		std::cout << "\n";

		for(int i = bok - 2; 0 < i; i--)
		{
			for(int i = 0; i < bok + 1; i++)
			{
				if(i == 0 || i == bok - 1)
					std::cout << "*";
				else
					std::cout << " ";
			}
			std::cout << "\n";
		}

		//podstawa dolna
		for(int i = bok; 0 < i; i--)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}

return 0;
}