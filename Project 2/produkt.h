#pragma once
#define produkt_hpp
#include <iostream>
#include <string>

using namespace std;
class Koszyk; 

 class Produkt {
	string nazwa;
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
	Produkt(string, int);
	//~Produkt();

	//string Produkt::getNazwa();
	//int Produkt::getCena();
	//void Produkt::setCena(int cena);
};

