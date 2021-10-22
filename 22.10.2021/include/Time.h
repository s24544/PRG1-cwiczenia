#include <string>

struct Time {
	int godzina;
	int minuta;
	int sekunda;

	Time() = default;
	std::string to_string() const;
	void next_hour();
	void next_minute();
	void next_second();
};
