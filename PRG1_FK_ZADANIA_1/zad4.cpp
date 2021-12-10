#include <iostream>
#include <string>

int main()
{
    std::string imie1, imie2, imie3, imie4, imie5;
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
    if(imie1[imie1.length()-1] == 'a')
    {
        liczba += 1;
        std::cout << imie1 << " to imie zenskie\n";
    }
    if(imie2[imie2.length()-1] == 'a')
    {
        liczba += 1;
        std::cout << imie2 << " to imie zenskie\n";
    }
    if(imie3[imie3.length()-1] == 'a')
    {
        liczba += 1;
        std::cout << imie3 << " to imie zenskie\n";
    }
    if(imie4[imie4.length()-1] == 'a')
    {
        liczba += 1;
        std::cout << imie4 << " to imie zenskie\n";
    }
    if(imie5[imie5.length()-1] == 'a')
    {
        liczba += 1;
        std::cout << imie5 << " to imie zenskie\n";
    }
    std::cout << "Imion zenskich jest " << liczba << ", a meskich " << 5-liczba << "\n";
}
