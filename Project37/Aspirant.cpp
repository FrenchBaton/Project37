#include "Aspirant.h"

Aspirant::Aspirant(string n, int a, int p, string title) :Student(n, a) {
	pages = p;
	titleWork = title;
}

void Aspirant::Init(string n, int a, int p, string title)
{
	Student::Init(n, a);
	{ pages = p, titleWork = title; }
}

void Aspirant::Print()
{
	Student::Print();
	cout << "Pages: " << pages << "\nTitle work: " << titleWork << endl;
}
