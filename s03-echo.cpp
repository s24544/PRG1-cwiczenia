#include <iostream>
#include <string>
//bez ćwiczeń dodatkowych
auto main(int argc, char* argv[]) -> int{
if(argc < 2){
std::cout << "Za mała liczba argumentów\n";
return 1;
}
else{
for(int i = 1;i < argc+1;i++){
std::cout << argv[i] << " ";
}
std::cout << "\n";
return 0;
}
}
