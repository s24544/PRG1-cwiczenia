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

int Time::time_of_day() const
{
	auto aktualna_godzina = Time::to_string();
	int pora_dnia;
	if(aktualna_godzina >= "06:00:00" && aktualna_godzina < "10:00:00")
	{
		pora_dnia = 0;
	}
	else
	{
		if(aktualna_godzina >= "10:00:00" && aktualna_godzina < "19:00:00")
		{
			pora_dnia = 1;
		}
		else
		{
			if(aktualna_godzina >= "19:00:00" && aktualna_godzina < "22:00:00")
			{
				pora_dnia = 2;
			}
			else
			{
				pora_dnia = 3;
			}
		}
	}
	return pora_dnia;
}

static const char *time_of_day_string[] = 
{
		"rano",
		"dzien",
		"wieczor",
		"noc"
};

std::string Time::to_string_time_of_day()
{
	int pora_dnia = Time::time_of_day();
	std::string pora = time_of_day_string[pora_dnia];
	return pora;
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

int main(){
auto czas = Time{23, 59, 59};
std::cout << czas.to_string() << "\n";
czas.next_second();
std::cout << "23:59:59 + 1 sekunda = " << czas.to_string() << "\n";
czas.next_minute();
std::cout << "23:59:59 + 1 min + 1 sek = " << czas.to_string() << "\n";
czas.next_hour();
std::cout << "23:59:59 + 1 godz + 1 min + 1 sek = " << czas.to_string() << "\n";
std::cout << czas.to_string() << " " << czas.to_string_time_of_day() << "\n";
czas = Time{9, 15, 32};
std::cout << czas.to_string() << " " << czas.to_string_time_of_day() << "\n";
czas = Time{15, 54, 13};
std::cout << czas.to_string() << " " << czas.to_string_time_of_day() << "\n";
czas = Time{19, 30, 44};
std::cout << czas.to_string() << " " << czas.to_string_time_of_day() << "\n";
std::cout << "Od północy do " << czas.to_string() << " minęło " << czas.count_minutes() << " minut lub " << czas.count_seconds() << " sekund\n";
return 0;
}
