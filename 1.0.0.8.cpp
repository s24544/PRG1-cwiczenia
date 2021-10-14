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
    auto const b = ask_user_for_integer("b = ");
    auto const c = ask_user_for_integer("c = ");
    int liczby[3] = {a, b, c};
    auto max = liczby[0];
    for (int i = 0; i < 3; i++){
    if (liczby[i] > max){
        max = liczby[i];
    }
    }
    std::cout << max << "\n";
    return 0;
}
