#include "Monitor.h"


void Monik::init(std::string firm, int button, int coast, int Gz)
{
	if (firm == "") throw std::invalid_argument("�������� ����� ������.");
	if (button < 0) throw std::domain_error("������������ ���������� �������������� ������.");
	if (coast <= 0) throw std::domain_error("������������ ����.");
	if (coast <= 0) throw std::domain_error("������������ ����.");
	this->firm = firm;
	this->button = button;
	this->cost = coast;
	this->Gz = Gz;
}

Monik::Monik(std::string firm, int button, int cost, int Gz)
{
	init(firm, button, cost, Gz);
}

Monik::Monik(Monik& m) {
	init(m.firm, m.button, m.cost, m.Gz);
}
// ������ ���� ����� ��������� 
Monik::Monik() {
	this->firm = "NoName";
	this->button = 0;
	this->cost = 1000;
	this->Gz = 0;
}



void Monik::print()
{
	std::cout << "����� - �������������: " << this->firm << ". ���������� ���. ������:" << this->button << ". ����:" << this->cost << ". ������:" << this->Gz << "\n";
}


void Monik::setCoast(int cost)
{
	init(this->firm, this->button,this->Gz, cost);
}
void Monik::setGz(int Gz)
{
	init(this->firm, this->button, Gz, this-> cost);
}
