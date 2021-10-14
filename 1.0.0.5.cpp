#include <iostream>
#include <string>

auto ask_user_for_integer(std::string const prompt) -> int
{
    if (not prompt.empty()){
                            std::cout << prompt;
                            }
    auto value = std::string{};
    std::getline(std::cin, value);
    return std::stoi(value);
}

auto main() -> int{
    auto const a = ask_user_for_integer("a = ");
    int b;
    if (a < 0){
     b = -1 * a;
     std::cout << b << "\n";
    }
    else{
        std::cout << a << "\n";   
    }
    
    return 0;
}
