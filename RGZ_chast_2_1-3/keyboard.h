#pragma once
#include <string>
#include <stdexcept>
#include <iostream>

class KeyBord //������������ �����
{
private:
	std::string Kfirm; //�������� �����-�������������
	int Kbutton; //����������  ������
	int Kcost; //����
	int size; // ����

	void init(std::string Kfirm, int Kbutton, int Kcoast, int size); //����� ��� ������������� ����� ������

public:
	KeyBord(std::string firm, int button, int cost, int size); //����������� �������������  

	KeyBord(KeyBord& m); //����������� �����������

	KeyBord(); //����������� �� ���������

	void Kprint(); //�����, ��������� �������� �� ���������� ������

	void setCoastK(int Kcost);
	void setSize(int size);

};
