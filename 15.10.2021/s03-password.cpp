#include <iostream>
#include <string>

auto main (int argc, char *argv[]) -> int
{
	auto password = std::string{argv[1]};
	auto podaj = std::string{};
	if(argc != 2)
	{
		std::cout << "Nieprawidłowa ilość argumentów!";
		return 1;
	}
	else
	{
		do
		{
			std::cout << "Podaj hasło: ";
			std::cin >> podaj;
			std::cout << "\n";
		}while(password.compare(podaj) != 0);
		std::cout << "ok!\n";
		return 0;
	}
}
