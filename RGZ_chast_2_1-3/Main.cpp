#include "keyboard.h"
#include "Monitor.h"
#include <iostream>
#include <Windows.h>
#include <iostream>
#include <Windows.h>
#include <vector>
#include <list>
#include <Windows.h>



int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::list<UClass*> mylist;
	
		int chois;
		int close = 1;
		do {
			std::cout << "1 - �������� ��� ������� � ������" << std::endl
				<< "2 - ������� �������� ������" << std::endl
				<< "0 - ��������� ���������� ���������" << std::endl;
			std::cin >> close;

			if (close == 1) {
				system("cls");
				std::cout << "������ ������ ������ �� ������ �������" << std::endl
					<< "1 - O����� �������� ������ ������������ �������" << std::endl
					<< "2 - ������ ������������ ������ ����������" << std::endl
					<< "3 - ������ ������������ ������ �������" << std::endl;
				std::cin >> chois;

				switch (chois) {
				case 1: {
					std::string firm;
					int cost;
					int button;
					std::cout << "������� ��������� �����" << std::endl;
					std::cin >> firm;
					std::cout << "������� ���� " << std::endl;
					std::cin >> cost;
					std::cout << "������� ��� ������ " << std::endl;
					std::cin >> button;
					UClass* n = new UClass(button, firm, cost);

					mylist.push_back(n);
					break;
				}
				case 2: {
					std::string firm;
					int cost;
					int button;
					int size;
					std::cout << "������� ��������� �����" << std::endl;
					std::cin >> firm;
					std::cout << "������� ���� " << std::endl;
					std::cin >> cost;
					std::cout << "������� ��� ������" << std::endl;
					std::cin >> button;
					std::cout << "������� ������ ���������� " << std::endl;
					std::cin >> size;
					UClass* n = new KeyBord(firm, button, cost, size);

					mylist.push_back(n);
					break;
				}
				case 3: {
					std::string firm;
					int cost;
					int button;
					int Gz;
					std::cout << "������� ��������� �����" << std::endl;
					std::cin >> firm;
					std::cout << "������� ���� " << std::endl;
					std::cin >> cost;
					std::cout << "������� ��� ������" << std::endl;
					std::cin >> button;
					std::cout << "������� ������ ���������� " << std::endl;
					std::cin >> Gz;
					UClass* n = new Monik(firm, button, cost, Gz);

					mylist.push_back(n);
					break;
				}

			
				
				}
			}
			if (close == 2) {
				system("cls");
				for (UClass* s : mylist) {
					s->printUC();
				}
			}
		} while (close);


	return 0;
}

















	//// ��������� ����� 
	//KeyBord k1("Logitech", 2, 5000, 60);
	//Monik m1("predator", 50, 70000, 60);
	//UClass w1(50,"MSI", 50);

	//k1.printUC();
	//m1.printUC();
	//w1.printUC();

	//k1.setSize();
	//m1.setGz();
	////w1.setFirm("qwe");//
	//w1.setCost(12);
	//w1.set_button(43);

	//k1.printUC();
	//m1.printUC();
	//w1.printUC();

	////m1.setCoast(10000);
	////m1.setGz(144);
	////
	////k1.setCoastK(10000);
	////k1.setSize(60);

	////m1.print();
	////k1.Kprint();

	
