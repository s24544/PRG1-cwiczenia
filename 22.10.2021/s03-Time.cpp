#include <iostream>
#include "include/Time.h"

void Time::time_verify() //naprawia godzinę
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


int main()
{
auto czas = Time{23, 59, 59};
czas.to_string();
czas.next_second();
std::cout << czas.to_string() << "\n";
czas.next_minute();
std::cout << czas.to_string() << "\n";
czas.next_hour();
std::cout << czas.to_string() << "\n";
return 0;
}
