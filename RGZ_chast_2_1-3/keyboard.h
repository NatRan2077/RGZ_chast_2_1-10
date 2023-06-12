
#pragma once
#include "UltraClass.h"
#include <string>
#include <stdexcept>
#include <iostream>

class KeyBord :public UClass 
{
private:
	int _size; // герц

	
	void init(std::string _firm, int _button, int _coast, int _size); //Метод для инициализации полей класса
public:
	
	KeyBord(std::string _firm, int _button, int _cost, int _size); //Конструктор инициализации  



//	KeyBord(); //Конструктор по умолчанию

	void Kprint(); //Метод, выводящий сведения об экземпляре класса
                                                                                                                    // сохр плохо без мб трабл будут 
	void setSize();

};
