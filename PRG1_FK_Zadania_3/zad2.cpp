#include <iostream>
#include "math.h"

class Punkt{
    //1.
    int x{}, y{};
public:
    void show() const;
    int getX() const;
    int getY() const;
    void setXY(Punkt& p);
    void setXY(int& x1, int& y1);
    Punkt getXY();

    //8.
    Punkt(int x, int y) {
        setXY(x, y);
        std::cout << "Utworzono punkt (" << x << ", " << y << ")\n";
    }

    //10.
    ~Punkt(){
        std::cout << "Destruktor\n";
        this->show();
    }
};
//3.
    void Punkt::show() const {
        std::cout << "Wspolrzedne punktu to (" << this->x << ", " << this->y
        << ").\n";
    }
    //4.
    int Punkt::getX() const {
        return this->x;
    }
    int Punkt::getY() const {
        return this->y;
    }

//5.
void Punkt::setXY(int& x1, int& y1) {
    this->x = x1;
    this->y = y1;
}

//6.
void Punkt::setXY(Punkt& p) {
    this->x = p.x;
    this->y = p.y;
}

//7.
Punkt Punkt::getXY() {
    return Punkt{this->x, this->y};
}

class Prostokat{
    Punkt l, p;
    public:
    Prostokat(int& x1, int& y1, int& x2, int& y2): l(x1, y1), p(x2, y2){}
    Prostokat(const Punkt& p1, const Punkt& p2): l(p1), p(p2){}

    void informacje()
    {
        std::cout << "Lewy gorny rog: ";
        l.show();
        std::cout << "\nPrawy gorny rog: ";
        p.show();
        std::cout << "\n";
    }

    static void oblicz_pole_powierzchni(Punkt& l, Punkt& p)
    {
        int a = abs(l.getX()-p.getX());
        int b = abs(l.getY()-p.getY());
        std::cout << "\nPole prostokata: " << a*b << "\n";
    }

    void czy_lezy_wewnatrz(Punkt& p)
    {
        int x_min, x_max, y_min, y_max;
        int px = p.getX();
        int py = p.getY();

        if(l.getY() <= p.getY())
        {
            y_min = l.getY();
            y_max = p.getY();
        }
        else
        {
            y_max = l.getY();
            y_min = p.getY();
        }

        if(p.getX() >= l.getX())
        {
            x_max = p.getX();
            x_min = l.getX();
        }
        else{
            x_max = l.getX();
            x_min = p.getX();
        }
        if(px < x_min || px > x_max && py > y_max || py < y_min)
            std::cout << "Punkt nie lezy wewnatrz prostokata.\n";
        else
            std::cout << "Punkt lezy wewnatrz prostokata.\n";
    }

};

int main(){
    auto p1 = Punkt(1, 2);
    auto p2 = Punkt(5, 3);
    auto prostokat = Prostokat(p1, p2);
    prostokat.oblicz_pole_powierzchni(p1, p2);
    prostokat.informacje();
    prostokat.czy_lezy_wewnatrz(p1);

    return 0;
}
