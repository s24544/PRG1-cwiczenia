#include <iostream>

auto main(int argc, char *argv[]) -> int{
if(argc > 1){
int liczba = atoi(argv[1]);
for(int i = liczba; i >=0; i--){
std::cout << i << " bottles of beer on the wall " << i << " bottles of beer.\n";
std::cout << "Take one down, pass it around\n";
if(i == 0){
std::cout << "No more bottles of beer on the wall, no more bottles of beer.\n";
std::cout << "Go to the store and buy some more, 99 bottles of beer on the wall...\n";
}
}
}
else{
for (int i = 99; i >= 0; i--){
std::cout << i << " bottles of beer on the wall, " << i << " bottles of beer.\n";
std::cout << "Take one down, pass it around\n";
if(i == 0){
std::cout << "No more bottles of beer on the wall, no more bottles of beer.\n";
std::cout << "Go to the store and buy some more, 99 bottles of beer on the wall...\n";
}
}

}
return 0;
}
