#include<iostream>
#include"Cvor.h"
#include"Osoba.h"
#include"Student.h"
#include"Lista.h"
using namespace std;

void main() {
	Osoba* o1=new Osoba(21, "Sanin Alagic");
	Osoba* o2=new Osoba(25,"Ivan Leko");
	Osoba* o3=new Osoba(38,"Tomislav Bradaric");
	Osoba* o4=new Osoba(20,"Amra Zekan");

	Lista <Osoba*>* lista=new Lista<Osoba*>();
	lista->dodajPrvi(o1);
	lista->dodajPosljednji(o2);
	lista->dodajPosljednji(o3);
	lista->dodajPosljednji(o4);
	lista->print();
	lista->ukloniPosljednji();
	lista->ukloniPrvi();
	lista->print();


	/*Cvor<int>* c1 = new Cvor<int>(NULL, 5);
	Cvor<int>* c2 = new Cvor<int>(c1, 6);

	cout << c1->info;
	cout << endl << c2->info;

	Cvor<float>* c3 = new Cvor<float>(NULL, 10.986784);
	Cvor<float>* c4 = new Cvor<float>(c3, 38.8864);

	cout<<endl << c3->info << endl;
	cout << c4->info << endl;
	
	Cvor<Student*>* c1Student = new Cvor<Student*>(NULL, new Student(&o1, "IB160205", 1, 2));
	c1Student->info->ispis();*/


	/*Cvor c1(NULL,o1);
	cout << c1.info.ime << "\t"<<c1.info.godine<< endl;

	Cvor c2(&c1,o2);
	cout << c2.info.ime<<"\t" <<c2.info.godine<< endl;

	Cvor* c3 = new Cvor(&c2, o3);
	cout << c3->info.ime<<"\t"<<c3->info.godine << endl;

	Cvor*c4 = new Cvor(c3, o4);
	cout << c4->info.ime <<"\t" <<c4->info.godine<<endl;

	Cvor* pOsoba1 = new Cvor(NULL, o1);
	Cvor* pOsoba2 = new Cvor(pOsoba1, o2);
	Cvor* pOsoba3 = new Cvor(pOsoba2, o3);
	Cvor* pOsoba4 = new Cvor(pOsoba3, o4);*/

	//Cvor* pOsobaP1 = new Cvor(NULL, &o1);
	//Cvor* pOsobaP2 = new Cvor(pOsobaP1, new Osoba(21, "Adin Orahovac"));

	//cout << pOsobaP1->info->ime << "\t" << pOsobaP1->info->godine << endl;
	//cout << pOsobaP2->info->ime << "\t" << pOsobaP2->info->godine << endl;

	//Cvor* c1 = new Cvor(NULL, new Student(&o1, "IB160205", 1, 2));
	//c1->info->ispis();

	system("pause");
}

