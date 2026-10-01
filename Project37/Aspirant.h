#pragma once
#include "Student.h"
class Aspirant :
    public Student
{
	int pages;
	string titleWork;
public:
	Aspirant() {}
	Aspirant(string n, int a, int p, string title);
	void Init(string n, int a, int p, string title);
	void Print();
};

