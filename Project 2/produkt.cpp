#include "Header.h"

	int Produkt::licznik=0;

	Produkt::Produkt():ilosc(100)
	{
		nazwa="chleb";
		id=1;
		licznik++;
		iid=licznik;

	}
	Produkt::Produkt(std::string NAZWA,int ID):ilosc(100)
	{
		this->nazwa=NAZWA;
		this->id=ID;
		this->iid=licznik++;
	}
	Produkt::Produkt(const Produkt& a):ilosc(100)
	{
		this->nazwa=a.nazwa;
		this->id=a.id;
		this->iid=licznik++;
	}
	/*Produkt::~Produkt()
	{
		cout<<" - "<<endl;
	}*/

	//string Produkt::getNazwa(){return this->nazwa;}
	//int Produkt::getCena(){return this->cena;}