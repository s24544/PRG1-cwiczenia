#include <string>

struct Student {
	std::string imie;
	std::string nazwisko;
	std::string numer_indeksu;
	int aktualny_semestr;
	float srednia_ocen;

	Student() = default;
	std::string to_string() const;
};

std::string Student::to_string() const{
	std::string imie = this -> imie;
	std::string nazwisko = this -> nazwisko;
	std::string indeks = this->numer_indeksu;
	std::string semestr = std::to_string(this->aktualny_semestr);
	std::string srednia = std::to_string(this->srednia_ocen);

return "Imię i nazwisko: " + imie + " " + nazwisko + "\nIndeks: s" + indeks + "\nSemestr: " + semestr + "\nŚrednia: " + srednia;
}
