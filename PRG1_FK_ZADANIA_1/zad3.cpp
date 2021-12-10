int main()
{
    std::string imie1, imie2;
    std::cout << "Podaj pierwsze imie: ";
    std::cin >> imie1;
    std::cout << "\n" << "Podaj drugie imie: ";
    std::cin >> imie2;
    std::cout << "\n";
    if(imie1.length() == imie2.length())
        std::cout << "Imiona " << imie1 << " i " << imie2 << " sa tej samej dlugosci.";
    else
    {
        if(imie1.length() > imie2.length())
            std::cout << "Imie " << imie1 << " jest dluzsze od " << imie2 << "\n";
        else
            std::cout << "Imie " << imie2 << " jest dluzsze od " << imie1 << "\n";
    }
}
