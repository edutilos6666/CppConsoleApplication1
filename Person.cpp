#include "stdafx.h"
#include "Person.h"


Person::Person() {

}
Person::~Person()
{
	//cout << "Person instance was destroyed." << endl; 
}


Person::Person(long id = 0 , string name = "", int age= 0, double wage = 0.0, bool active= false) {
	this->id = id; 
	this->name = name; 
	this->age = age; 
	this->wage = wage; 
	this->active = active; 
}

void Person::setId(long id) {
	this->id = id; 
}
void Person::setName(string name) {
	this->name = name; 
}
void Person::setAge(int age) {
	this->age = age; 
}
void Person::setWage(double wage) {
	this->wage = wage; 
}
void Person::setActive(bool active) {
	this->active = active; 
}
long Person::getId() {
	return this->id; 
}
string Person::getName() {
	return this->name; 
}
int Person::getAge() {
	return this->age; 
}
double Person::getWage() {
	return this->wage; 
}
bool Person::isActive() {
	return this->active; 
}


string Person::toString() {
	stringstream ss; 
	ss << "name = " << this->name << endl
		<< "age = " << this->age << endl
		<< "wage = " << this->wage << endl
		<< "active = " << this->active << endl; 
	return ss.str(); 
}