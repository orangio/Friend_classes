#include "koszyk.h"

using namespace std;

int Koszyk::ilosc_prod=0;

	Koszyk::Koszyk():max(5)

	{
		cout<<"tworze zamowienie domyslne z 5 produktami"<<endl;
		iid++;
		this->tab = new Produkt[max];
		ilosc_prod+=5;
	}

	Koszyk::Koszyk(const Koszyk& a):max(a.max)
	{
		iid=iid++;
		this->tab = a.tab;
		//tab = new Produkt[max];
		//for(int i=0;i<max;i++)
		//{
		//tab[i] = a.tab[i];
		//}
		ilosc_prod+=max;
	}

	Koszyk::Koszyk(Produkt* a, int b):max(b)
	{
		cout<<"tworze zamowienie domyslne z "<<b<<" produktami"<<endl;
		iid=iid++;
		//for(int i=0;i<max;i++)
		//{
		//tab[i] = a[i];
		//}
		this->tab = a;
		ilosc_prod+=max;
	}

	Koszyk::Koszyk(int b):max(b)
	{
		cout<<"tworze zamowienie domyslne z "<<b<<" produktami"<<endl;
		iid++;
		this->tab = new Produkt[max];
		ilosc_prod+=max;
	}

	Koszyk::~Koszyk()
	{
		delete[] tab;
		cout<<" - "<<endl;
	}

	void Koszyk::UstalCene(int a)
	{
		tab[a].cena=rand()%10000*0.01;
	}

	void Koszyk::KwotaZamow()
	{
		double suma=0;
		for(int i=0;i<this->max;i++)
		{
			suma+=this->tab[i].cena;
		}
		cout<<"Suma zamowienia :"<<suma<<endl;
	}



	/*string Koszyk::getNazwisko(){return this->nazwisko;}
	string Koszyk::getImie(){return this->imie;}
	int Koszyk::getIid(){return this->iid;}
	Film* Koszyk::getTablica(){return this->tab;}
	Film Koszyk::getElement(int b){return tab[b];}

	void Koszyk::setNazwisko(string Nazwisko){this->nazwisko=Nazwisko;}
	void Koszyk::setImie(string Imie){this->imie=Imie;}
	void Koszyk::setTablica(Film* Tablica){this->tab=Tablica;}*/