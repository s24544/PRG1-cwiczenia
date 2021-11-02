#include <string>

struct Time 
{
	int hour;
	int minute;
	int second;
	Time() = default;
	enum class Time_of_day
	{
		rano,
		dzien,
		wieczor,
		noc,
	};
	std::string to_string() const;
	std::string to_string(Time::Time_of_day pora) const;
	void next_hour(); //zwieszka godzinę o 1
	void next_minute(); //zwiększa minutę o 1
	void next_second(); //zwiększa sekundę o 1
	void time_verify(); //poprawia godzinę np. 24:00:00 na 00:00:00
	auto time_of_day() const;
	auto count_seconds() const -> std::uint64_t;
	auto count_minutes() const -> uint64_t;
	auto time_to_midnight() const -> Time;

	auto operator+ (Time const&) const -> Time;
	auto operator- (Time const&) const -> Time;
	auto operator< (Time const&) const -> bool;
	auto operator> (Time const&) const -> bool;
	auto operator== (Time const&) const -> bool;
	auto operator!= (Time const&) const -> bool;
};