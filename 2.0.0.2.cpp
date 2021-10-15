#include <iostream>

auto main(int argc, char *argv[]) -> int{
int a = std::atoi(argv[1]);
int b = std::atoi(argv[2]);
int c = std::atoi(argv[3]);
int druk = a;
if (argc !=4 || c == 0){
std::cout << "Nieprawodłowe dane wejściowe";
return 1;
}

else{
if (b < a){
std::cout << "brak liczb większych lub równych A i mniejszych od B\n";
}else{
do{
if(druk % c == 0){
std::cout << druk << "\n";
}
druk = druk + 1;
	
}
while(druk < b);

}

return 0;
}
}
