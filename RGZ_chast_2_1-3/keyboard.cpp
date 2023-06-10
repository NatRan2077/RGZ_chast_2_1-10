#include "Keyboard.h"


void KeyBord::init(std::string Kfirm, int Kbutton, int Kcost, int size)
{
	if (Kfirm == "") throw std::invalid_argument("�������� ����� ������.");
	if (Kbutton < 0) throw std::domain_error("������������ ����������  ������.");
	if (Kcost <= 0) throw std::domain_error("������������ ����.");
	if (size <= 0) throw std::domain_error("������������ ����.");
	this->Kfirm = Kfirm;
	this->Kbutton = Kbutton;
	this->Kcost = Kcost;
	this->size = size;
}

KeyBord::KeyBord(std::string Kfirm, int Kbutton, int Kcost, int size)
{
	init(Kfirm, Kbutton, Kcost, size);
}

KeyBord::KeyBord(KeyBord& m) {
	init(m.Kfirm, m.Kbutton, m.Kcost, m.size);
}
// ������ ���� ����� ��������� 
KeyBord::KeyBord() {
	this->Kfirm = "NoNamek";
	this->Kbutton = 0;
	this->Kcost = 0;
	this->size = 0;
}



void KeyBord::Kprint()
{
	std::cout << "����� - �������������: " << this->Kfirm << ". ���������� ������:" << this->Kbutton << ". ����:" << this->Kcost << ". ������:" << this->size << "\n";
}


void KeyBord::setCoastK(int Kcost)
{
	init(this->Kfirm, this->Kbutton,this-> size ,Kcost);
}
void KeyBord::setSize(int size)
{
	init(this->Kfirm, this->Kbutton, size, this->Kcost);
}
	