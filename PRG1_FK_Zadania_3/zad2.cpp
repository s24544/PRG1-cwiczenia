#include "iostream"
#include "punkt.h"
#include "math.h"

class Prostokat{
    Punkt pkt1;
    Punkt pkt2;
public:
    void print_prostokat_info();
    void print_pole_powierzchni();
    bool czy_lezy_wewnatrz(Punkt& p);

    Prostokat(const int x1, const int x2, const int y1, const int y2): pkt1(x1, y1), pkt2(x2, y2){}
    Prostokat(Punkt p1, Punkt p2): pkt1(p1), pkt2(p2){}
    ~Prostokat() = default;
};

void Prostokat::print_prostokat_info() {
    std::cout << "Lewy rog: ";
    pkt1.show();
    std::cout << "\nPrawy rog: ";
    pkt2.show();
}

void Prostokat::print_pole_powierzchni() {
    int szer = abs(pkt1.getX() - pkt2.getX());
    int wys = abs(pkt1.getY() - pkt2.getY());
    std::cout << wys * szer;
}

bool Prostokat::czy_lezy_wewnatrz(Punkt& p) {
    int xmin, xmax, ymin, ymax;
    if(pkt1.getY() >= pkt2.getY())
    {
        ymin = pkt2.getY();
        ymax = pkt1.getY();
    }
    else
    {
        ymin = pkt1.getY();
        ymax = pkt2.getY();
    }
    if(pkt1.getX() <= pkt2.getX())
    {
        xmin = pkt1.getX();
        xmax = pkt2.getX();
    }
    else
    {
        xmin = pkt2.getX();
        xmax = pkt1.getX();
    }

    if(p.getX() < xmin || p.getX() > xmax || ymax < p.getY() || ymin > p.getY())
        return false;
    else
        return true;
}
