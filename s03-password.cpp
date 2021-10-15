#include <iostream>
#include <string>
//do poprawy
auto main() -> int{
std::string pass = "student";
std::string password;

do{
std::cout << "Podaj hasło: ";
std::cin >> password;
std::cout << "\n";

}while(pass.compare(password) != 0);
std::cout << "ok!\n";
return 0;
}
