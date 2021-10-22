#include <iostream>
#include "include/Time.h"


void Time::next_hour(){
	this->hour = this->hour + 1;
	if(this->hour == 24){
		this->hour = 0;
	}
}

void Time::next_minute(){
	this->minute = this->minute + 1;
	if(this->minute == 60){
		this->hour = this->hour + 1;
		this->minute = 0;
	}
}

void Time::next_second(){
	this->second = this->second + 1;
	if(this->second == 60){
		this->minute = this->minute + 1;
		this->second = 0;	
	}
}

std::string Time::to_string() const{
	std::string godzina = std::to_string(this->hour);
	std::string minuta = std::to_string(this->minute);
	std::string sekunda = std::to_string(this->second);
	if(godzina.length() == 1){
		godzina = "0" + godzina;
	}
	if(minuta.length() == 1){
		minuta = "0" + minuta;
	}
	if(sekunda.length() == 1){
		sekunda = "0" + sekunda;	
	}
	
return godzina + ":" + minuta + ":" + sekunda;
}


int main(){
auto czas = Time{23, 59, 59};
czas.to_string();
czas.next_hour();
czas.next_minute();
czas.next_second();
std::cout << czas.to_string() << "\n";
return 0;
}
