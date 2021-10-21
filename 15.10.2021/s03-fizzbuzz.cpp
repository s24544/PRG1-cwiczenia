#include <iostream>

auto main(int argc, char *argv[]) -> int{
int liczba = atoi(argv[1]);
if(argc !=2){
std::cout << "Nieprawidłowe argumenty\n";
return 1;
}
else{
for(int i = 1;i <= liczba; i++){
if(i % 3 == 0 && i % 5 == 0){
std::cout << "FizzBuzz\n";
}
else if(i % 5 == 0){
std::cout << "Buzz\n";
}
else if(i % 3 == 0){
std::cout << "Fizz\n";
}
else{
std::cout << i << "\n";
}
}
return 0;
}
}
