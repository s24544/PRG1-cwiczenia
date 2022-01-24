#include <iostream>

class Punkt{
    //1
    int x, y;
public:
    //3
    void show();
    //4
    int getX(){return this->x;};
    int getY(){return this->y;};
    //5
    void setXY(int& x1, int& y1){ this->x = x1;this->y = y1;};
    //6
    void setXY(Punkt& p){this->x = p.x;this->y = p.y;};
    //7
    Punkt getXY();
    //8
    Punkt(int x1, int y1) {
        setXY(x1, y1);
    std::cout << "Utworzono punkt (" << this->x << ", " << this->y << ").\n";
    }
    //9
    Punkt(Punkt& p){
        this->x = p.getX();
        this->y = p.getY();
    }
    //10
    ~Punkt()= default;
};

void Punkt::show() {
    std::cout << "Wspolrzedne punktu to (" << this->x << ", "  << this->y << ").\n";
}
//7
Punkt Punkt::getXY() {
    Punkt p(p.y = this->y, p.y = this->y);
    return p;
}
