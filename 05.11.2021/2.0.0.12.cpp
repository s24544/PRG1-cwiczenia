#include <iostream>


int main(int argc, char* argv[])
{
	if(argc != 2)
	{
		std::cout << "Nieprawidłowa ilość argumentów\n";
		return 1;
	}
	else
	{
		int a = atoi(argv[1]);
		for(int i = 1; i < a + 1;i++)
		{
			int granica = i;
			for(int i = 0;i < granica; i++)
			{
				std::cout << "*";
			}
			std::cout << "\n";
		}

	}

return 0;
}