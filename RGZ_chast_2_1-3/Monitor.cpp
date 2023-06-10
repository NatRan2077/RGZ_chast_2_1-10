#include "Monitor.h"


void Monik::init(std::string firm, int button, int coast, int Gz)
{
	if (firm == "") throw std::invalid_argument("Название фирмы пустое.");
	if (button < 0) throw std::domain_error("Неккоректное количество дополнительных кнопок.");
	if (coast <= 0) throw std::domain_error("Неккоректная цена.");
	if (coast <= 0) throw std::domain_error("Неккоректная цена.");
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
// дефолт поля потом отвалятся 
Monik::Monik() {
	this->firm = "NoName";
	this->button = 0;
	this->cost = 1000;
	this->Gz = 0;
}



void Monik::print()
{
	std::cout << "Фирма - производитель: " << this->firm << ". Количество доп. кнопок:" << this->button << ". Цена:" << this->cost << ". Герцов:" << this->Gz << "\n";
}


void Monik::setCoast(int cost)
{
	init(this->firm, this->button,this->Gz, cost);
}
void Monik::setGz(int Gz)
{
	init(this->firm, this->button, Gz, this-> cost);
}
