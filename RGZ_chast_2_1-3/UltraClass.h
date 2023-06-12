#pragma once
#include <string>
#include <stdexcept>
#include <iostream>

class UClass
{
private:
	std::string _firm; //�������� �����-�������������
	int _cost; //����
	int _button;

	

public:
	void init(int _button, std::string _firm, int _cost); //����� ��� ������������� ����� ������

//	UClass(int _button, std::string _firm, int _cost); //����������� �������������  

	UClass(int _button = 0,	std::string _firm = "0", int _cost = 0);

	//UClass(UClass& m); //����������� �����������

	//UClass(); //����������� �� ���������

	virtual void printUC() const; //�����, ��������� �������� �� ���������� ������

	void set_button(int _button);
	void setFirm(char _firm); // 
	void setCost(int _cost);
};
