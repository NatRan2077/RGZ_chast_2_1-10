
#pragma once
#include "UltraClass.h"
#include <string>
#include <stdexcept>
#include <iostream>

class KeyBord :public UClass 
{
private:
	int _size; // ����

	
	void init(std::string _firm, int _button, int _coast, int _size); //����� ��� ������������� ����� ������
public:
	
	KeyBord(std::string _firm, int _button, int _cost, int _size); //����������� �������������  



//	KeyBord(); //����������� �� ���������

	void Kprint(); //�����, ��������� �������� �� ���������� ������
                                                                                                                    // ���� ����� ��� �� ����� ����� 
	void setSize();

};
