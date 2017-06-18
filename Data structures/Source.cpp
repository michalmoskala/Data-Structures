#include <iostream>
#include "Lista.h"
#include <fstream>
#include "Tablica.h"
#include "Kopiec.h"
#include "Timer.h"
#include "Menu.h"
using namespace std;


int main() {
	kopiec kop;
	lista lis;
	tablica tab;
	timer tim;
	double t1, t2;
	int menu=2,menu2=8;
	int a,b;
	

	while (menu!=0) {
	cout << strmenu << strexit;
	cin >> menu;
			
	if (menu==1)
	{
		do{
			cout << strmlt << strexit;
			cin >> menu2;
			switch (menu2)
			{
			case 0:
				break;
			case 1:
				cout << "Ile elementow?(max 20000)\n";
				cin >> a;
				tab.wypelnij(a);
				break;
			case 2:
				tab.wyczysc();
				cout << "Tablica pusta\n";
				break;
			case 3:
				cout << "Podaj wartosc\n";
				cin >> a;
				tim.StartCounter();
				t1 = tim.GetCounter();
				tab.znajdz(a);
				t2 = tim.GetCounter();
				cout << "Czas operacji - " << (t2 - t1) << "ms\n";
				break;
			case 4:
				tab.pokaz();
				break;
			case 5:
				cout << "Podaj wartosc\n";
				cin >> a;
				tim.StartCounter();
				t1 = tim.GetCounter();
				tab.dodajnapocz(a);
				t2 = tim.GetCounter();
				cout << "Czas operacji - " << (t2 - t1) << "ms\n";
				break;
			case 6:
				cout << "Podaj wartosc\n";
				cin >> a;
				tim.StartCounter();
				t1 = tim.GetCounter();
				tab.dodajnakoniec(a);
				t2 = tim.GetCounter();
				cout << "Czas operacji - " << (t2 - t1) << "ms\n";
				break;
			case 7:
				cout << "Podaj wartosc\n";
				cin >> a;
				cout << "Podaj indeks\n";
				cin >> b;
				tim.StartCounter();
				t1 = tim.GetCounter();
				tab.dodajnamiejsce(a,b);
				t2 = tim.GetCounter();
				cout << "Czas operacji - " << (t2 - t1) << "ms\n";
				break;
			case 8:
				tim.StartCounter();
				t1 = tim.GetCounter();
				tab.usunzpocz();
				t2 = tim.GetCounter();
				cout << "Czas operacji - " << (t2 - t1) << "ms\n";
				break;
			case 9:
				tim.StartCounter();
				t1 = tim.GetCounter();
				tab.usunzkonca();
				t2 = tim.GetCounter();
				cout << "Czas operacji - " << (t2 - t1) << "ms\n";
				break;
			case 10:
				cout << "Podaj indeks\n";
				cin >> a;
				tim.StartCounter();
				t1 = tim.GetCounter();
				tab.usunzmiejsca(a);
				t2 = tim.GetCounter();
				cout << "Czas operacji - " << (t2 - t1) << "ms\n";
				break;
			default:
				cout << strno;
				break;

			}

		} while (menu2 != 0);
	}

	else if (menu==2)
	{
		do {
			cout << strmlt << strexit;
			cin >> menu2;
			switch (menu2)
			{
			case 1:
				cout << "Ile elementow?(max 20000)\n";
				cin >> a;
				lis.wypelnij(a);
				break;
			case 2:
				lis.wyczysc();
				cout << "Tablica pusta\n";
				break;
			case 3:
				cout << "Podaj wartosc\n";
				cin >> a;
				tim.StartCounter();
				t1 = tim.GetCounter();
				lis.znajdz(a);
				t2 = tim.GetCounter();
				cout << "Czas operacji - " << (t2 - t1) << "ms\n";
				break;
			case 4:
				lis.pokaz();
				break;
			case 5:
				cout << "Podaj wartosc\n";
				cin >> a;
				tim.StartCounter();
				t1 = tim.GetCounter();
				lis.dodajnapocz(a);
				t2 = tim.GetCounter();
				cout << "Czas operacji - " << (t2 - t1) << "ms\n";
				break;
			case 6:
				cout << "Podaj wartosc\n";
				cin >> a;
				tim.StartCounter();
				t1 = tim.GetCounter();
				lis.dodajnakoniec(a);
				t2 = tim.GetCounter();
				cout << "Czas operacji - " << (t2 - t1)  << "ms\n";
				break;
			case 7:
				cout << "Podaj wartosc\n";
				cin >> a;
				cout << "Podaj indeks\n";
				cin >> b;
				tim.StartCounter();
				t1 = tim.GetCounter();
				lis.dodajnamiejsce(a, b);
				t2 = tim.GetCounter();
				cout << "Czas operacji - " << (t2 - t1) << "ms\n";
				break;
			case 8:
				tim.StartCounter();
				t1 = tim.GetCounter();
				lis.usun(0);
				t2 = tim.GetCounter();
				cout << "Czas operacji - " << (t2 - t1)  << "ms\n";
				break;
			case 9:
				tim.StartCounter();
				t1 = tim.GetCounter();
				lis.usun(lis.length - 1);
				t2 = tim.GetCounter();
				cout << "Czas operacji - " << (t2 - t1) << "ms\n";
				break;
			case 10:
				cout << "Podaj indeks\n";
				cin >> a;
				tim.StartCounter();
				t1 = tim.GetCounter();
				lis.usun(a);
				t2 = tim.GetCounter();
				cout << "Czas operacji - " << (t2 - t1) << "ms\n";
				break;
			case 0:
				break;
			default:
				cout << strno;
				break;
			}

		} while (menu2 != 0);
	}

	else if (menu==3)
	{
		do {
			cout << strkop << strexit;
			cin >> menu2;
			switch (menu2)
			{
			case 0:
				break;
			case 1:
				cout << "Ile elementow?(max 20000)\n";
				cin >> a;
				kop.wypelnij(a);
				break;
			case 2:
				kop.wyczysc();
				cout << "Tablica pusta\n";
				break;
			case 3:
				tim.StartCounter();
				cout << "Podaj wartosc?";
				t1 = tim.GetCounter();
				kop.znajdz(a);
				t2 = tim.GetCounter();
				cout << "Czas operacji - " << (t2 - t1) << "ms\n";
				break;
			case 4:
				kop.pokaz();
				break;
			case 5:
				tim.StartCounter();
				cout << "Podaj wartosc?";
				t1 = tim.GetCounter();
				kop.znajdz(a);
				t2 = tim.GetCounter();
				cout << "Czas operacji - " << (t2 - t1) << "ms\n";
				break;
			case 6:
				tim.StartCounter();
				t1 = tim.GetCounter();
				kop.usun();
				t2 = tim.GetCounter();
				cout << "Czas operacji - " << (t2 - t1) << "ms\n";
				break;
			default:
				cout << strno;
				break;
			}


		} while (menu2 != 0);
		
	}

	else if(menu==0)
	{
		return 0;
	}
	else
	{
		cout << strno;

	}
	
	
	}
}