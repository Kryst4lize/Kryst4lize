#include"Person.h"
#include<iostream>
#pragma once
using namespace std;
class Adult :public Person {
public:
	Adult(){}
	~Adult() {}
	Adult(string name, int age, string add, vector<Book> vb) :Person(name, age, add, vb) {}
	long moneyPay() {
		return 10000 * getVB().size();
	}
	void display() {
		cout << "Adult!" << endl;
		Person::display();
	}
	
};