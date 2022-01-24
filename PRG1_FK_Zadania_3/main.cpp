#include <iostream>
#include "prostokat.h"
#include "p

int main(){
    std::cout << "Zadanie 1\n";
    int px1 = 15;
    int py1 = 30;
    int x1 = 1;
    int y1 = 2;
    int x2 = 5;
    int y2 = 3;
    Punkt p1(x1, y2);
    Punkt p2(x2, y2);
    p1.setXY(x1, y1);
    p1.show();
    p1.setXY(x2, y2);
    p1.show();
    p2.setXY(px1, py1);
    p1.setXY(p2);
    p1.show();
    p1.getXY().show();
    Punkt p3(p1);
    p3.show();

    std::cout << "Zadanie 2\n";
    Prostokat pr1(1, 10, 2, 20);
    Punkt a(1, 2);
    Punkt b(10, 20);
    Punkt c(2, 3);
    Prostokat pr2(a, b);
    pr1.print_prostokat_info();
    pr2.print_prostokat_info();
    pr1.print_pole_powierzchni();
    pr2.print_pole_powierzchni();
    std::cout << "\n";
    if(pr1.czy_lezy_wewnatrz(c))
        std::cout << "lezy";
    else
        std::cout << "nie lezy";
    return 0;
}
