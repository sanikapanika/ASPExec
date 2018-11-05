#pragma once
#ifndef __LISTA_H__
#define __LISTA_H__

#include <iostream>
#include "Cvor.h"
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
	}

	void dodajPosljednji(Tip v) {


	}

	Tip ukloniPosljednji() {
		if (isPrazan()) {
			throw exception("Greska. Nemoguce ukloniti elemenat iz prazne liste");
		}
		return x;
	}

	bool isPrazan() {
		return prvi == NULL;
	}

	void print() {
		cout << "\nSTEK: " << endl;
	}
};

#endif // !__LISTA_H__
