#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main(int argc, char *argv[]){
if(argc < 2)
{
	std::cout << "Nieprawidłowa ilość argumentów\n";
	return 1;
}
else
{
	std::string flaga_n = "\n";
	std::string flaga_l = "";
	auto args = std::vector<std::string>{};
	std::copy_n(argv, argc, std::back_inserter(args));
	args.erase(args.begin());
	//3 ify zamiast if else bo mogą być spełnione 2ify jednocześnie w obojętnej kolejności
	if(args[0] == "-n" || args[1] == "-n")
	{
		flaga_n = "";
		args.erase(std::remove(args.begin(), args.end(), "-n"));
	}
	if(args[0] == "-l"  || args[1] == "-l")
	{
		args.erase(std::remove(args.begin(), args.end(), "-l"));
		flaga_l = "\n";
	}
	if(args[0] == "-r" || args[1] == "-r")
	{
		args.erase(std::remove(args.begin(), args.end(), "-r"));
		std::reverse(args.begin(), args.end());
	}

	for (auto const& each: args)
	{
		std::cout << each << " " << flaga_l;
	}
std::cout << flaga_n;
}
return 0;
}
