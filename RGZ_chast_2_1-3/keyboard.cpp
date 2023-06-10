#include "Keyboard.h"


void KeyBord::init(std::string Kfirm, int Kbutton, int Kcost, int size)
{
	if (Kfirm == "") throw std::invalid_argument("Название фирмы пустое.");
	if (Kbutton < 0) throw std::domain_error("Неккоректное количество  кнопок.");
	if (Kcost <= 0) throw std::domain_error("Неккоректная цена.");
	if (size <= 0) throw std::domain_error("Неккоректная цена.");
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
// дефолт поля потом отвалятся 
KeyBord::KeyBord() {
	this->Kfirm = "NoNamek";
	this->Kbutton = 0;
	this->Kcost = 0;
	this->size = 0;
}



void KeyBord::Kprint()
{
	std::cout << "Фирма - производитель: " << this->Kfirm << ". Количество кнопок:" << this->Kbutton << ". Цена:" << this->Kcost << ". Герцов:" << this->size << "\n";
}


void KeyBord::setCoastK(int Kcost)
{
	init(this->Kfirm, this->Kbutton,this-> size ,Kcost);
}
void KeyBord::setSize(int size)
{
	init(this->Kfirm, this->Kbutton, size, this->Kcost);
}
	