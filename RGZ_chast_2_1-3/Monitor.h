
#pragma once
#include "UltraClass.h"
#include <string>
#include <stdexcept>
#include <iostream>

class Monik :public UClass
{
private:
	int _Gz; // герц
public:

	void init(std::string _firm, int _button, int _cost, int _Gz); //Метод для инициализации полей класса

	Monik(std::string _firm, int _button, int _cost, int _Gz); //Конструктор инициализации  

	//Monik(Monik& m); //Конструктор копирования

    //Monik(); //Конструктор по умолчанию

	void printUC() const; //Метод, выводящий сведения об экземпляре класса

	void setGz(); // установление цен ы и Гц
};
