#include <string>

struct Time {
	int hour;
	int minute;
	int second;

	Time() = default;
	std::string to_string() const;
	void next_hour();
	void next_minute();
	void next_second();
	void time_verify();
};
