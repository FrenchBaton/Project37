#pragma once
#include<iostream>
using namespace std;

class Student
{
protected:
	string name;
	int age;
public:
	Student() {}
	Student(string n, int a) :name(n), age(a) {}
	void Init(string n, int a) { name = n, age = a; }
	void Print();
};

