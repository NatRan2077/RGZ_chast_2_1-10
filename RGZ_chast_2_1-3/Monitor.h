
#pragma once
#include "UltraClass.h"
#include <string>
#include <stdexcept>
#include <iostream>

class Monik :public UClass
{
private:
	int _Gz; // ����
public:

	void init(std::string _firm, int _button, int _cost, int _Gz); //����� ��� ������������� ����� ������

	Monik(std::string _firm, int _button, int _cost, int _Gz); //����������� �������������  

	//Monik(Monik& m); //����������� �����������

    //Monik(); //����������� �� ���������

	void printUC() const; //�����, ��������� �������� �� ���������� ������

	void setGz(); // ������������ ��� � � ��
};
