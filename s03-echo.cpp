#include <iostream>
#include <string>

//z "ćwiczeniami dodatkowymi"
auto main(int argc, char *argv[]) -> int{
if(argc < 2){
std::cout << "Nieprawidłowa ilość argumentów\n";
return 1;
}
else{
if(std::string{argv[1]} == "-n"){ // -n
for(int i = 2;i < argc;i++){
std::cout << argv[i] << " ";
}
return 0;
}
else if(std::string{argv[1]} == "-r"){ //-r
if(std::string{argv[2]} == "-l"){ // -r -l
for(int i = argc - 1;i > 2;i--){
std::cout << argv[i] << "\n";
}
std::cout << "\n";
return 0;
}
else if(std::string{argv[2]} == "-n"){ //-r -n
for(int i = argc - 1;i > 2;i--){
std::cout << argv[i] << " ";
}
return 0;
}
for(int i = argc - 1;i > 1;i--){
std::cout << argv[i] << " ";
}
std::cout << "\n";
return 0;
}
else if(std::string{argv[1]} == "-l"){ //-l
for(int i = 2;i < argc;i++){
std::cout << argv[i] << "\n";
}
std::cout << "\n";
return 0;
}
else{
for(int i = 1;i < argc;i++){
std::cout << argv[i] << " ";
}
std::cout << "\n";
return 0;
}
}
}
