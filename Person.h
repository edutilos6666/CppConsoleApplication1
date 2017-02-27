#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std; 
class Person
{
private: 
	long id; 
	string name; 
	int age; 
	double wage; 
	bool active;
public:
	Person();
	Person(long id, string name, int age, double wage, bool active); 
	~Person();
	void setId(long id); 
	void setName(string name); 
	void setAge(int age); 
	void setWage(double wage); 
	void setActive(bool active); 
	long getId(); 
	string getName(); 
	int getAge(); 
	double getWage(); 
	bool isActive(); 
	string toString(); 
};

