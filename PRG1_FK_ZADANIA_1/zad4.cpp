#include <iostream>
#include <string>

int main()
{
    std::string imie1, imie2, imie3, imie4, imie5;
    std::string imiona[5];
    int liczba = 0;
    std::cout << "Podaj 1 imie: ";
    std::cin >> imie1;
    std::cout << "Podaj 2 imie: ";
    std::cin >> imie2;
    std::cout << "Podaj 3 imie: ";
    std::cin >> imie3;
    std::cout << "Podaj 4 imie: ";
    std::cin >> imie4;
    std::cout << "Podaj 5 imie: ";
    std::cin >> imie5;
    imiona[0] = imie1;
    imiona[1] = imie2;
    imiona[2] = imie3;
    imiona[3] = imie4;
    imiona[4] = imie5;

    for(auto i: imiona)
    {
        if(i[(i.length()-1)] == 'a')
            liczba += 1;
    }
    std::cout << "Imion zenskich jest " << liczba << ", a meskich " << 5-liczba << "\n";
}
