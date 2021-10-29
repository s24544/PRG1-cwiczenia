#include <string>

struct Time {
	int hour;
	int minute;
	int second;

	Time() = default;
	std::string to_string() const;
	void next_hour(); //zwieszka godzinę o 1
	void next_minute(); //zwiększa minutę o 1
	void next_second(); //zwiększa sekundę o 1
	void time_verify(); //poprawia godzinę np. 24:00:00 na 00:00:00
	int time_of_day() const;//zwraca int z przedzialu 0-3 w zależności od godziny
	std::string to_string_time_of_day();//w zależności od inta z przedziału 0-3 zwraca string z pora dnia
	auto count_seconds() const -> uint64_t;
	auto count_minutes() const -> uint64_t;
};

enum class Time_of_day
{
	RANO,
	DZIEN,
	WIECZOR,
	NOC
};
