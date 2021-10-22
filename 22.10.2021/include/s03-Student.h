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
