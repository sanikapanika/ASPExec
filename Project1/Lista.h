#pragma once
#ifndef __LISTA_H__
#define __LISTA_H__

#include <iostream>
#include "Cvor.h"
#include"Osoba.h"
using namespace std;

template<class Tip>

class Lista {
private:
	Cvor<Tip>* prvi;

public:
	Lista() {
		prvi = NULL;
	}

	void dodajPrvi(Tip v) {
		//Cvor<Tip>*n = new Cvor<Tip>(prvi, v);
		//n->next=prvi;--------------|
		//prvi = n;
		prvi = new Cvor<Tip>(NULL, v);
	}

	Tip ukloniPrvi() {
		if (isPrazan()) {
			throw exception("Greska. Nije moguce ukloniti elemenat iz prazne liste");
		}
		else {
			Cvor<Tip>* t = prvi; //nova instanca pokazuje na prvi
			prvi = prvi->next; //prvi sada pokazuje na drugi
			Tip x = t->info; //nova varijabla X pokazuje na atribute od prvog clana liste
			delete t;
			return x;
		}
	}

	void dodajPosljednji(Tip v) {
		Cvor<Tip>* n = new Cvor<Tip>(NULL, v);
		Cvor<Tip>* t = prvi;
		if (t == NULL) {
			prvi = n; 
		}
		else {
			
			while (t->next != NULL) {
				t = t->next;
			}
			t->next = n;
		}
	}
	Tip ukloniPosljednji() {
		if (isPrazan()) {
			throw exception("Greska. Nemoguce ukloniti elemenat iz prazne liste");
		}
		else {

			Cvor<Tip>* t = prvi;
			Cvor<Tip>* pt = NULL;

			while (t->next != NULL) {
				pt = t;
				t = t->next;
				
			}
			Tip x = t->info;
			delete t; 
			if (pt == NULL) {
				prvi = NULL;
			}
			else {
				pt->next = NULL;
			}
			return x;
		}
		
	}

	bool isPrazan() {
		return prvi == NULL;
	}

	void print() {
		cout << "\nSTEK: " << endl;
		Cvor<Tip>* t = prvi;
			while (t != NULL) {
				cout << t->info->ime << endl;
				t = t->next;
			}
	}
};

#endif // !__LISTA_H__
