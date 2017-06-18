#pragma once

class tablica
{
public:
	int *tab;
	int length;

	tablica();

	void dodajnapocz(int a); //dodaje element na poczatek listy
	void dodajnakoniec(int a); //dodaje element na koniec listy
	void dodajnamiejsce(int a, int b); //dodaje element na indeks b

	void usunzpocz();//usuwa element z indeksu 0 i realokuje tablice
	void usunzkonca();//usuwa element z ostatniego indeksu i realokuje tablice
	void usunzmiejsca(int a);//usuwa element z podanego indeksu

	void znajdz(int a); //podaje indeks na ktorym znajduje sie element a
	void pokaz(); //wyswietla cala liste

	void zamienmiejsca(int a, int b); //zamienia ze soba dwa elementy tablicy o podanych indeksach

	void wyczysc(); //usuwa wszyskie elementy
	void wypelnij(int a); //wypelnia elementami w ilosci podanej w argumencie
};