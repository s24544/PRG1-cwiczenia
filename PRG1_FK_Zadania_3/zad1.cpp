#include <iostream>

class Punkt{
    //1.
    int x{}, y{};
public:
    void show() const;
    int getX() const;
    int getY() const;
    void setXY(Punkt& p);
    void setXY(int& x1, int& y1);
    Punkt getXY() const;

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
Punkt Punkt::getXY() const {
    return Punkt{this->x, this->y};
}


int main(){
        //2.
    auto p1 = Punkt(1, 2);
    auto p2 = Punkt(5, 3);
    auto p3 = Punkt(4, 5);
    p2.show();
    p2.setXY(p3);
    p2.show();
    p1.getXY().show();


    return 0;
}
