#include <iostream>
#include "Lista.h"
#include "Obiekt.h"
#include <time.h>


lista::~lista()
{
}

void lista::dodajnapocz(int a)
{
	obiekt *nowy = new obiekt;//nowy element listy
	nowy->wart = a;//przypisanie wartosci nowego elementu
	nowy->poprz = NULL;//poprzedni element nie istnieje
	nowy->nast = head;//nastepny element to ten, na ktory wczesniej wskazywal head
	head = nowy;//head teraz wskazuje na nowy element
	
	if (length == 0) tail = nowy;//jesli tablica byla pusta to tail tez wskazuje na nowy element
	else nowy->nast->poprz = nowy;// a jesli nie to pole poprz nastepnego elementu wskazuje na nowy element

	length++;
}

void lista::dodajnakoniec(int a)
{
	obiekt *nowy = new obiekt;//nowy element listy
	nowy->wart = a;//przypisanie wartosci nowego elementu
	nowy->poprz = tail;//poprzedni element to ten, na ktory wczesniej wskazywal tail
	nowy->nast = NULL; //nastepny element nie istnieje
	tail = nowy; //tail teraz wskazuje na nowy element

	if (length == 0) head = nowy;//jesli tablica byla pusta to head tez wskazuje na nowy element
	else nowy->poprz->nast = nowy;// a jesli nie to pole nast poprzedniego elementu wskazuje na nowy element

	length++;

}

void lista::dodajnamiejsce(int a, int b)
{
	if (b == 0) dodajnapocz(a);
	else {
		if (b >= length) dodajnakoniec(a);
		else {
			b--;
			obiekt *temp = new obiekt;
			temp = head;
			for (int n = 0; n < b; n++)
				temp = temp->nast;//przesuniecie sie na indeks na ktory chcemy wstawic element
			obiekt *nowy = new obiekt;
			
			nowy->wart = a;//przypisanie wartosci nowego elementu
			nowy->nast = temp->nast;//kalibrowanie wska¿ników nowego elementu
			nowy->poprz = temp;

			temp->nast->poprz = nowy;//kalibrowanie wska¿ników s¹siadów nowego elementu
			temp->nast = nowy;

			length++;
			
		}
	}
}

void lista::usun(int a)
{
	if (length == 0) std::cout << "\nPusta lista";
	else if (length <= a) std::cout << "\nZa du¿y element";
	else {
		obiekt* temp = new obiekt;
		temp = head;
		for (int n = 0; n < a; n++) temp = temp->nast;
		if (temp->poprz != NULL)
			temp->poprz->nast = temp->nast; // nastênik poprzednika tempa wskazuje na nastêpnik tymczasowego elementu
		else
			head = temp->nast;

		if (temp->nast != NULL)
			temp->nast->poprz = temp->poprz;//poprzednik nastêpnika tempa wskazuje na poprzednik tymczasowego elementu
		else
			tail = temp->poprz;

		delete temp;
		length--;
	}
}

void lista::znajdz(int a)
{
	bool skok = false;
	obiekt* temp = new obiekt;
	temp = head;
	for (int n = 0;; n++)
	{
		if (temp == NULL) break;
		if (temp->wart == a) {
			skok = true;
			std::cout << n << ": " << temp->wart << std::endl;//przesuwanie sie po elementach i porownywanie do wskazanej wartosci
		}
		temp = temp->nast;
	}
	if (skok == false) std::cout << "\nElement nie istnieje";
}

void lista::pokaz()
{
	obiekt* temp = new obiekt;
	temp = head;
	for(int n=0;;n++)
	{
		if (temp == NULL) break;
		std::cout << n << ": " << temp->wart << std::endl;
		temp = temp->nast;
	}
}

void lista::wyczysc()
{
	int dl = length;
	for (int n = 0; n < dl; n++) usun(0);
}

void lista::wypelnij(int a)
{
	srand(time(NULL));

	int wczyt[20000];
	for (int n = 0; n < a; n++) dodajnapocz(rand() % 20000);//wypelnia kopiec elementami

}
