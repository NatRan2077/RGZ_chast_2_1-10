#pragma once
#include <string>
#include <stdexcept>
#include <iostream>

class UClass
{
private:
	std::string _firm; //Название фирмы-производителя
	int _cost; //Цена
	int _button;

	

public:
	void init(int _button, std::string _firm, int _cost); //Метод для инициализации полей класса

//	UClass(int _button, std::string _firm, int _cost); //Конструктор инициализации  

	UClass(int _button = 0,	std::string _firm = "0", int _cost = 0);

	//UClass(UClass& m); //Конструктор копирования

	//UClass(); //Конструктор по умолчанию

	virtual void printUC() const; //Метод, выводящий сведения об экземпляре класса

	void set_button(int _button);
	void setFirm(char _firm); // 
	void setCost(int _cost);
};
