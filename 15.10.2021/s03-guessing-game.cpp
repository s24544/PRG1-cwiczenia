#include <iostream>
#include <random>
auto main() -> int{
std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<> distr(1, 100);

int los = distr(gen);
int a;
do{
std::cout << "guess: ";
std::cin >> a;
if(a == los){
std::cout << "just right!\n";
}
if(a > los){
std::cout << "too big!\n";
}
if(a < los){
std::cout << "too small!\n";
}

}
while(a != los);


return 0;
}
