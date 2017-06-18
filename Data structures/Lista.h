#pragma once
#include "Obiekt.h"

class lista {
public:
	obiekt *head = NULL;
	obiekt *tail = NULL;
	int length = 0;

	~lista();
	void dodajnapocz(int a); //dodaje element na poczatek listy
	void dodajnakoniec(int a); //dodaje element na koniec listy
	void dodajnamiejsce(int a, int b); //dodaje element na indeks b

	void usun(int a);//usuwa element z podanego indeksu

	void znajdz(int a); //podaje indeks na ktorym znajduje sie element a
	void pokaz(); //wyswietla cala liste

	void wyczysc(); //usuwa wszyskie elementy
	void wypelnij(int a); //wypelnia elementami w ilosci podanej w argumencie
};
