#include <iostream>

auto main(int argc, char *argv[]) -> int{
int a = std::atoi(argv[1]);
int b = std::atoi(argv[2]);
int s = std::atoi(argv[3]);
if (argc !=4 || s == 0){
std::cout << "Nieprawidłowe dane wejściowe\n";
return 1;
}

else{
if (b < a){
std::cout << "brak liczb większych lub równych A i mniejszych od B\n";
}else{
if (s > 0){
for(int i = a; i < b; i = i + s){
std::cout << i << "\n";
}
}
else{
for(int i = a; i < b; i = i - s){
std::cout << i << "\n";
	}
}
}

return 0;
}
}
