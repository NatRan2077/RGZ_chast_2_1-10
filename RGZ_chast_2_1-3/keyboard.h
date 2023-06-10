#pragma once
#include <string>
#include <stdexcept>
#include <iostream>

class KeyBord //Компьютерные мышки
{
private:
	std::string Kfirm; //Название фирмы-производителя
	int Kbutton; //Количество  кнопок
	int Kcost; //Цена
	int size; // герц

	void init(std::string Kfirm, int Kbutton, int Kcoast, int size); //Метод для инициализации полей класса

public:
	KeyBord(std::string firm, int button, int cost, int size); //Конструктор инициализации  

	KeyBord(KeyBord& m); //Конструктор копирования

	KeyBord(); //Конструктор по умолчанию

	void Kprint(); //Метод, выводящий сведения об экземпляре класса

	void setCoastK(int Kcost);
	void setSize(int size);

};
