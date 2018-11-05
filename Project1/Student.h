#pragma once
#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <iostream>
#include "Osoba.h"
using namespace std;

char* alociraj(const char* text) {
	char* temp = new char[strlen(text)+1];
	strcpy_s(temp, strlen(text) + 1, text);
	return temp;
}

class Student {
public:
	Osoba* o;
	char* _brojIndeksa;
	int ciklus;
	int godinaStudija;

	Student() {};

	Student(Osoba* o, const char* brojIndeksa, int ciklus, int godinaStudija) {
		this->o = o;
		this->_brojIndeksa =alociraj(brojIndeksa);
		this->ciklus = ciklus;
		this->godinaStudija = godinaStudija;
	}

	void ispis() {
		cout << "---------------------------------------------------------------------" << endl;
		cout << "Ime i prezime:\t" << o->ime<<endl;
		cout << "Starost:\t" << o->godine<<endl;
		cout << "---------------------------------------------------------------------" << endl;
		cout << "Broj indeksa:\t" << _brojIndeksa << endl;
		cout << "Ciklus:\t" <<ciklus<< endl;
		cout << "Godina studija: " << godinaStudija << endl;
		cout << "---------------------------------------------------------------------" << endl;
	}
};
#endif // !__STUDENT_H__
