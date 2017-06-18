#include "Kopiec.h"
#include <iostream>
#include <cmath>
#include <time.h>


void kopiec::dodaj(int a)
{
	tabl.dodajnakoniec(a); //dodaje element na koniec tablicy
	int temp = tabl.length - 1; //indeks na nowy element
	int oj = temp - 1; //indeks na ojca nowego elementu
	oj = oj / 2;
	while (temp > 0 && (tabl.tab[oj] < a))//dopoki kopiec nie zostanie naprawiony
	{
		tabl.zamienmiejsca(temp, oj);//zamiana miejsc
		temp = oj;//szukanie "nowego" ojca
		oj = oj - 1;
		oj = oj / 2;

	}
}

void kopiec::usun()
{
	tabl.zamienmiejsca(0, tabl.length - 1);//wstawienie ostatniego elementu jako nowy korzen
	tabl.usunzkonca();//usuniecie starego korzenia
	int temp = 0;//indeks nowego korzenia
	int dziec=1;//indeks lewego dziecka
	
	while(dziec<tabl.length)//dopoki dziecko istnieje
	{
		if (dziec + 1 < tabl.length-1 && tabl.tab[dziec + 1] > tabl.tab[dziec]) dziec++;//jezeli prawe dziecko jest wieksze
		if (tabl.tab[temp] >= tabl.tab[dziec]) break;//jesli drzewo zostalo naprawione
		
		tabl.zamienmiejsca(temp, dziec);//zamiana miejsc
		temp = dziec;//indeks nowego naprawianego elementu
		dziec = 2 * dziec;//... i jego dziecka
		dziec++;
	}
	
}

void kopiec::pokaz()
{
	int a,i = 1;
	for (int n = 0; n < tabl.length; n++) {
		std::cout << n << ": " << tabl.tab[n] << "\n";//wyswietl indeks i wartosc
		a = pow(2, i) - 2;
		if (n == a)//jesli zaczyna sie nowy poziom
		{
			std::cout << "\n";//zrob dodatkowy endl
			i++;
		}
	}
}

void kopiec::znajdz(int a)
{
	tabl.znajdz(a);
}

void kopiec::wyczysc()
{
	int dl = tabl.length;
	for (int n = 0; n < dl; n++) usun();
}

void kopiec::wypelnij(int a)
{
	srand(time(NULL));

	int wczyt[20000];
	for (int n = 0; n < a; n++) dodaj(rand() % 20000);//wypelnia kopiec elementami

}