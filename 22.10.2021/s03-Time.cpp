#include <iostream>
#include "include/Time.h"

void Time::time_verify()
{
	if(this->hour >= 24)
	{
		this->hour = 0;
	}
	if(this->minute >=  60)
	{
		this->minute = 0;
		if(this->hour <= 22)
		{
			this->hour = this->hour + 1;
		}
		else
		{
			this->hour = 0;
		}
	}
	if(this->second >= 60)
	{
		this->second = 0;
		if(this->minute <= 58)
		{
			this->minute = this->minute + 1;	
		}
		else
		{
			this->minute = 0;
			if(this->hour <= 22)
			{
				this->hour = this->hour + 1;
			}
			else
			{
				this->hour = 0;
			}
		}
	}
}

void Time::next_hour()
{
	this->hour = this->hour + 1;
	Time::time_verify();
}

void Time::next_minute()
{
	this->minute = this->minute + 1;
	Time::time_verify();
}

void Time::next_second()
{
	this->second = this->second + 1;
	Time::time_verify();
}

auto Time::time_of_day() const
{
	if(hour >= 6 && hour <= 11)
		return Time::Time_of_day::rano;
	else
	{
		if(hour >= 12 && hour <= 17)
			return Time::Time_of_day::dzien;
		else
		{
			if(hour >= 18 && hour <= 22)
				return Time::Time_of_day::wieczor;
			else
				return Time::Time_of_day::noc;
		}
	}
}


std::string Time::to_string(Time::Time_of_day pora) const
{
	switch(pora)
	{
		case Time_of_day::rano:
			return "rano";
		case Time_of_day::dzien:
			return "dzień";
		case Time_of_day::wieczor:
			return "wieczór";
		case Time_of_day::noc:
			return "noc";
		default:
			return "błąd";
	}
}

std::string Time::to_string() const
{
	std::string godzina = std::to_string(this->hour);
	std::string minuta = std::to_string(this->minute);
	std::string sekunda = std::to_string(this->second);
	if(godzina.length() == 1)
	{
		godzina = "0" + godzina;
	}
	if(minuta.length() == 1)
	{
		minuta = "0" + minuta;
	}
	if(sekunda.length() == 1)
	{
		sekunda = "0" + sekunda;	
	}
	return godzina + ":" + minuta + ":" + sekunda;
}

auto Time::count_seconds() const -> uint64_t
{
	uint64_t sekundy = 0;
	sekundy = sekundy + (this->hour * 60 * 60);
	sekundy = sekundy + (this->minute * 60);
	sekundy = sekundy + this->second;
	return sekundy;
}

auto Time::count_minutes() const -> uint64_t
{
	uint64_t minuty = 0;
	minuty = minuty + (this->hour * 60);
	minuty = minuty + this->minute;
	return minuty;
}

auto Time::time_to_midnight() const -> Time
{
	Time czas;
	czas.second = 60 - second;
	czas.minute = 59 - minute;
	czas.hour = 23 - hour;
	if(czas.second == 60)
	{
		czas.minute += 1;
		czas.second = 0;
	}
	return czas;
}

auto Time::operator+ (Time const& o) const -> Time
{	
	auto s = second;
	auto m = minute;
	auto h = hour;
	if(s < 59)
		s += o.second;
	else
	{
		s -= 60;
		m += 1;
	}
	if(m < 59)
		m += o.minute;
	else
	{
		m -= 60;
		h += 1;
	}
	h += o.hour;
	if(h > 23)
		h -= 24;



	return Time{h, m, s};

}

auto Time::operator-(Time const& o) const -> Time
{
	auto s = second;
	auto m = minute;
	auto h = hour;

	s -= o.second;
	m -= o.minute;
	h -= o.hour;
	if(s<0)
	{
		s += 60;
		m -= 1;
	}
	if(m < 0)
	{
		m += 60;
		h -= 1;
	}
	if(h < 0)
		h += 24;

	return Time{h, m, s};

}

auto Time::operator< (Time const& o) const -> bool
{
	if(o.hour != hour)
	{
		if(hour < o.hour)
				return true;
			else
				return false;
	}
	else
	{
		if(o.minute != minute)
		{
			if(minute < o.minute)
				return true;
			else
				return false;
		}
		else
		{
			if(second < o.second)
				return true;
			else
				return false;
		}
	}
}

auto Time::operator> (Time const& o) const -> bool
{
	if(o.hour != hour)
	{
		if(hour > o.hour)
				return true;
			else
				return false;
	}
	else
	{
		if(o.minute != minute)
		{
			if(minute > o.minute)
				return true;
			else
				return false;
		}
		else
		{
			if(second > o.second)
				return true;
			else
				return false;
		}
	}
}

auto Time::operator== (Time const& o) const -> bool
{
	if(hour==o.hour && minute==o.minute && second == o.second)
		return true;
	else
		return false;
}

auto Time::operator!= (Time const& o) const -> bool
{
	if(hour!=o.hour && minute!=o.minute && second != o.second)
		return true;
	else
		return false;
}

int main(){
auto czas = Time{13, 22, 44};
auto czas2 = czas + Time{1, 2, 3};
auto czas3 = czas2 - Time{5, 10, 15};
if(czas2 == czas3)
	std::cout << czas2.to_string() << " jest równy " << czas3.to_string() << "\n";
if(czas2 != czas3)
	std::cout << czas2.to_string() << " nie jest równy " << czas3.to_string() << "\n";
if(czas2 > czas3)
	std::cout << czas2.to_string() << " jest większy od  " << czas3.to_string() << "\n";
if(czas2 < czas3)
	std::cout << czas2.to_string() << " jest mniejszy od " << czas3.to_string() << "\n";
std::cout << czas.to_string() << "\n";
std::cout << czas.to_string() << " po dodaniu 1 godziny, 2 minut i 3 sekund: " << czas2.to_string() << "\n";
std::cout << czas2.to_string() << " po odjęciu 5 godzin, 10 minut i 15 sekund: " << czas3.to_string() << "\n";
czas.next_second();
std::cout << "23:59:59 + 1 sekunda = " << czas.to_string() << "\n";
czas.next_minute();
std::cout << "23:59:59 + 1 min + 1 sek = " << czas.to_string() << "\n";
czas.next_hour();
std::cout << "23:59:59 + 1 godz + 1 min + 1 sek = " << czas.to_string() << "\n";
std::cout << "Od północy do " << czas.to_string() << " minęło " << czas.count_minutes() << " minut lub " << czas.count_seconds() << " sekund\n";
std::cout << "Pora dnia: " << czas.to_string(czas.time_of_day()) << "\n";
std::cout << "Do północy zostało " << czas.time_to_midnight().to_string() << "\n";
return 0;
}
