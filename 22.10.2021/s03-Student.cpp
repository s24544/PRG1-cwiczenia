#include <iostream>
#include "include/s03-Student.h"

std::string Student::to_string() const{
	std::string imie = this -> imie;
	std::string nazwisko = this -> nazwisko;
	std::string indeks = this->numer_indeksu;
	std::string semestr = std::to_string(this->aktualny_semestr);
	std::string srednia = std::to_string(this->srednia_ocen);

return "Imię i nazwisko: " + imie + " " + nazwisko + "\nIndeks: s" + indeks + "\nSemestr: " + semestr + "\nŚrednia: " + srednia;
}

int main(){
Student ja = Student{"Jan", "Kreft", "24544", 1, 3.5};
std::cout << ja.to_string() << "\n";
return 0;
}
