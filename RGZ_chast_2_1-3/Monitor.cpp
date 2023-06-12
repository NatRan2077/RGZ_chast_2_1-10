#include "Monitor.h"
#include "UltraClass.h"

void Monik::init(std::string _firm, int _button, int _cost, int _Gz)
{
	UClass::init(_button, _firm, _cost);
	if (_Gz < 0) throw std::domain_error("Неккоректная цена.");
	this->	_Gz = _Gz;
}

Monik::Monik(std::string _firm, int _button, int _cost, int _Gz) : UClass{ _button, _firm, _cost }
{
	init(_firm, _button, _cost, _Gz);
}



void Monik::printUC() const
{
	UClass::printUC();
	std::cout << ". Gz:" << this->_Gz << "\n";
}



void Monik::setGz()
{
	std::cout << "необходимая длинна" << std::endl;
	std::cin >> _Gz; 
}
