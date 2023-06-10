
#pragma once
#include <string>
#include <stdexcept>
#include <iostream>

class Monik //������������ �����
{
private:
	std::string firm; //�������� �����-�������������
	int button; //����������  ������
	int cost; //����
	int Gz; // ����

	void init(std::string firm, int button, int coast, int Gz); //����� ��� ������������� ����� ������

public:
	Monik(std::string firm, int button, int cost, int Gz); //����������� �������������  

	Monik(Monik& m); //����������� �����������

	Monik(); //����������� �� ���������

	void print(); //�����, ��������� �������� �� ���������� ������

	void setCoast(int cost);
	void setGz(int Gz);
};
