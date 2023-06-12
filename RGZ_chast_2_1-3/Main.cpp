#include "keyboard.h"
#include "Monitor.h"
#include <iostream>
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// поправить принт 
	KeyBord k1("Logitech", 2, 5000, 60);
	Monik m1("predator", 50, 70000, 60);
	UClass w1(50,"MSI", 50);

	k1.Kprint();
	m1.Kprint();
	w1.printUC();

	k1.setSize();
	m1.setGz();
	w1.setFirm("qwe");//
	w1.setCost(12);
	w1.set_button(43);

	k1.Kprint();
	m1.Kprint();
	w1.printUC();

	//m1.setCoast(10000);
	//m1.setGz(144);
	//
	//k1.setCoastK(10000);
	//k1.setSize(60);

	//m1.print();
	//k1.Kprint();

	
}
