#include <iostream>

struct To{
	To() = default;
	void druk(){std::cout << this;}
};

int main(){
auto struktura = To{};
struktura.druk();
std::cout << "\n" << &struktura << "\n";
return 0;
}
