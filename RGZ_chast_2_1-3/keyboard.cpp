#include "Keyboard.h"
#include "UltraClass.h"

void KeyBord::init(std::string _firm, int _button, int _cost, int _size)
{
	UClass::init(_button,_firm, _cost);
	if (_size < 0) throw std::domain_error("������������ ����.");
	this->_size = _size;
}

KeyBord::KeyBord(std::string _firm, int _button, int _cost, int _size) : UClass{ _button, _firm, _cost}
{

	init(_firm, _button, _cost, _size);
}


// ������ ���� ����� ��������� 

//KeyBord::KeyBord() {
//	this->_firm = "NoNamek";
//	this->_button = 0;
//	this->_cost = 0;
//	this->_size = 0;
//}



void KeyBord::printUC() const
{
	UClass::printUC();
	std::cout << ". ������:" << this->_size << "\n";
}



void KeyBord::setSize()
{
	std::cout << "����������� ������" << std::endl;
	std::cin >> _size; /*throw std::domain_error("��������� ����������� ������ �������"*/
}
	