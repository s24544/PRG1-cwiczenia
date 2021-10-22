#include <iostream>
#include "include/s03-Student.h"

int main(){
Student ja = Student{"Jan", "Kreft", "24544", 1, 3.5};
std::cout << ja.to_string() << "\n";
return 0;
}
