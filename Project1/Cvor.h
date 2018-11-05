#pragma once
#ifndef __CVOR_H__
#define __CVOR_H__

#include <iostream>
#include "Osoba.h"
#include "Student.h"
using namespace std;

//Genericki mehanizam prosljedjivanja generickog tipa podatka za klasu
//class Tip -> varijabla kojoj ce tip podatka biti promjenjiv

template <class Tip>

struct Cvor {

	Cvor* next;
	Tip info; //Student*

	Cvor(Cvor* next,Tip info) {
		this->next = next;
		this->info = info; // info*= Student*
	}
};
#endif // !__CVOR_H__
