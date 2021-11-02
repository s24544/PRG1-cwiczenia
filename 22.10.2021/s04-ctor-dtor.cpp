#include <iostream>

struct ctor_i_dtor
{
	std::string wartosc;
	ctor_i_dtor(std::string wartosc){
		this->wartosc = wartosc;
	}
	~ctor_i_dtor() 
	{
		std::cout << "DESTRUCTION! " << wartosc << "\n";
	}
};

int main()
{
	auto a = ctor_i_dtor("123");
	return 0;
}
