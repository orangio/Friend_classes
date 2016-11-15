#include "koszyk.h"
#include <iostream>
#include <string>

void WypiszKoszyk(Koszyk& a)
{
	for (int i = 0; i<a.max; i++) {
		WypiszProdukt(a.tab[i]);
	}
}

void WypiszProdukt(Produkt& a)
{
	cout << "Nazwa : " << a.nazwa << "Cena : " << a.cena << endl;
}

int main()
{
	//Koszyk k1;
	{
		Produkt p1;
		WypiszProdukt(p1);
	}
	/*{
	Koszyk k1;
	for(int i=0;i<5;i++)
		k1.UstalCene(i);
	WypiszKoszyk(k1);
	cout<<"Ilosc produktow = "<<k1.ilosc_prod<<endl;
	}*/

	system("Pause");
	return 0;
}