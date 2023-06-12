#include "UltraClass.h"


void UClass::init(int _button, std::string _firm, int _cost)
{
	if (_firm == "") throw std::invalid_argument("�������� ����� ������.");
	
	if (_cost < 0) throw std::domain_error("������������ ����.");
	this->_button = _button;
	this->_firm = _firm;
	this->_cost = _cost;

}

UClass::UClass(int _button, std::string _firm, int _cost)
{
	init(_button,_firm, _cost);
}




void UClass::printUC() const
{
	std::cout << "����� - �������������: " << this->_firm << ". ����:" << this->_cost << ". Knopki:" << this->_button <<"\n";
}


void UClass::setFirm(char _firm)
{
	std::cout << "������� ����� ������" << std::endl;
	std::cin >> _firm;
}
void UClass::setCost(int _cost)
{
	init(this->_button, this->_firm, _cost);
}
void UClass::set_button(int _button)
{
	init(this->_cost , this->_firm, _button);
}
