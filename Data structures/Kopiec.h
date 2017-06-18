#pragma once
#include "Tablica.h"


class kopiec
{
public:
	tablica tabl;
	int getlen() { return tabl.length; }
	kopiec() { tabl.length = 0; }

	void dodaj(int a); //dodaje lisc na koniec kopca i naprawia od dolu
	void usun(); //usuwa korzen, wstawia ostatni lisc w jego miejsce i naprawia od gory

	void pokaz(); //wyswietla caly kopiec
	void znajdz(int a); //podaje indeks na ktorym znajduje sie element a

	void wyczysc(); //usuwa wszyskie elementy
	void wypelnij(int a); //wypelnia elementami w ilosci podanej w argumencie
};
