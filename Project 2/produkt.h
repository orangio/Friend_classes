#pragma once
#include "Header.h"

 class Produkt {
	std::string nazwa;
	int id;
	int iid;
	double cena;
	static int licznik;
	friend class Koszyk;
	friend void WypiszProdukt(Produkt&);
	//friend void WypiszKoszyk(Koszyk&);
	const int ilosc;
public:

	Produkt();
	Produkt(const Produkt&);
	Produkt(std::string, int);
	//~Produkt();

	//string Produkt::getNazwa();
	//int Produkt::getCena();
	//void Produkt::setCena(int cena);
};

