#include "Tablica.h"
#include <time.h>
#include <iostream>

void tablica::dodajnapocz(int a)
{

	int *nowa = new int[length+1];//nowa tablica
	nowa[0] = a;//wrzuca nowy element na poczatek nowej tablicy
	for (int n = 1; n < length + 1; n++) nowa[n] = tab[n - 1];//wypelnia reszte tablicy
	delete tab;//usuwa poprzednia tablice
	length++;
	tab = nowa;//przesuwa wskaznik
}

void tablica::dodajnakoniec(int a)
{
	int *nowa = new int[length + 1];//nowa tablica
	for (int n = 0; n < length; n++) nowa[n] = tab[n];//wypelnienie elementami poprzedniej tablicy
	nowa[length] = a;//wrzucenie na koniec nowego elementu
	delete tab;//usuwa poprzednia tablice
	length++;
	tab = nowa;//przesuwa wskaznik
}

void tablica::dodajnamiejsce(int a, int b)
{
	if (b > length) std::cout << "\n Za duza wartosc indeksu";
	else {
		int n;
		int *nowa = new int[length + 1];//nowa tablica
		for (n = 0; n < b; n++) nowa[n] = tab[n];//wrzuca elementy mniejsze od indeksu b
		nowa[n] = a;//nowy element
		n++;
		for (; n < length + 1; n++) nowa[n] = tab[n - 1];//wrzuca elementy wieksze od indeksu b
		delete tab;//usuwa poprzednia tablice
		length++;
		tab = nowa;//przesuwa wskaznik
	}
}

void tablica::usunzmiejsca(int a)
{
	if (length == 0) std::cout << "\nTablica juz jest pusta";
	else if (length <= a) std::cout << "\nElement poza zasiegiem";
	else {
		int n;
		int *nowa = new int[length - 1];//nowa tablica
		for (n = 0; n < a; n++) nowa[n] = tab[n];//wrzuca elementy mniejsze od indeksu a
		for (; n < length-1; n++) nowa[n] = tab[n+1];//wrzuca elementy wieksze od indeksu a
		delete tab;//usuwa poprzednia tablice
		length--;
		tab = nowa;//przesuwa wskaznik
	}
}

void tablica::znajdz(int a)
{
	for (int n=0;n<length;n++)
	{
		if (tab[n]==a)
		{
			std::cout << "\nZnaleziono na indeksie" << n;
			return;
		}

	}
	std::cout << "\nObiekt nie istnieje";
}

void tablica::usunzpocz()
{
	if (length==0) std::cout << "\nTablica juz jest pusta";
	else {
		int *nowa = new int[length - 1];//nowa tablica
		for (int n = 0; n < length - 1; n++) nowa[n] = tab[n + 1];//przeskakuje pierwszy element i wypelnia nowa tablice
		delete tab;//usuwa poprzednia tablice
		length--;
		tab = nowa;//przesuwa wskaznik
	}
}

void tablica::usunzkonca()
{
	if (length == 0) std::cout << "\nTablica juz jest pusta";
	else {
		int *nowa = new int[length - 1];//nowa tablica
		for (int n = 0; n < length - 1; n++) nowa[n] = tab[n];//wypelnia nowa tablice z pominieciem ostatniego elementu
		delete tab;//usuwa poprzednia tablice
		length--;
		tab = nowa;//przesuwa wskaznik
	}
}

void tablica::zamienmiejsca(int a, int b)
{
	if (a >= length || b >= length) std::cout << "\nNie ma takich elementow";
	else {
		int temp = tab[a];//wartosc pod a wrzucany do pomocniczej zmiennej
		tab[a] = tab[b];//pod indeks a wrzucamy wartosc b
		tab[b] = temp;//pod indeks a wrzucamy wartosc a przechowywana w pomocniczej zmiennej
	}
}

void tablica::pokaz()
{
	if (length == 0) std::cout << "\nTablica jest pusta";
	else for (int n = 0; n < length; n++) std::cout << n << ": " << tab[n] << "\n";//wyswietla wszystkie elementy (i ich indeksy)
}

tablica::tablica() // konstruktor tworzy pusta tablice
{
	length = 0;
	tab = new int[0];
}

void tablica::wyczysc()
{
	int dl = length;
	for (int n = 0; n < dl; n++) usunzpocz();
}

void tablica::wypelnij(int a)
{
	srand(time(NULL));

	int wczyt[20000];
	for (int n = 0; n < a; n++) dodajnapocz(rand() % 20000);//wypelnia kopiec elementami

}