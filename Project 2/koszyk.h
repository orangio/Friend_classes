#pragma once
#include "Header.h"

class Koszyk {
	static int iid;
	Produkt * tab;
	friend void WypiszKoszyk(Koszyk&);
	const int max;
	static int ilosc_prod;
public:
	void UstalCene(int );
	void KwotaZamow();
	Koszyk();
	Koszyk(const Koszyk&);
	Koszyk(Produkt* , int);
	Koszyk(int);
	~Koszyk();

	//string Koszyk::getNazwisko();
	//string Koszyk::getImie();
	//int Koszyk::getIid();
	//Produkt* Koszyk::getTablica();
	//Produkt Koszyk::getElement(int a);

	//void Koszyk::setNazwisko(string Nazwisko);
	//void Koszyk::setImie(string Imie);
	//void Koszyk::setTablica(Produkt* Tablica);
};