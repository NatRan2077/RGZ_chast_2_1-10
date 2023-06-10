
#pragma once
#include <string>
#include <stdexcept>
#include <iostream>

class Monik //Компьютерные мышки
{
private:
	std::string firm; //Название фирмы-производителя
	int button; //Количество  кнопок
	int cost; //Цена
	int Gz; // герц

	void init(std::string firm, int button, int coast, int Gz); //Метод для инициализации полей класса

public:
	Monik(std::string firm, int button, int cost, int Gz); //Конструктор инициализации  

	Monik(Monik& m); //Конструктор копирования

	Monik(); //Конструктор по умолчанию

	void print(); //Метод, выводящий сведения об экземпляре класса

	void setCoast(int cost);
	void setGz(int Gz);
};
