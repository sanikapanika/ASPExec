#pragma once
#ifndef __OSOBA_H__
#define __OSOBA_H__

#include <iostream>
#include <cstring>
using namespace std;

class Osoba {

public:
	int godine;
	char* ime;

	Osoba() {}

	Osoba(int godine,const char* ime) {
		this->ime = new char[strlen(ime) + 1];
		strcpy_s(this->ime, strlen(ime) + 1, ime);
		this->godine = godine;
	}
};


#endif // !__OSOBA_H__
