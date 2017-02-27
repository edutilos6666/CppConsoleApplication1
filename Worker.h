#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std; 

class Worker
{
private: 
	long id; 
	string name; 
	int age; 
	double wage; 
public:
	Worker();
	~Worker();
	Worker(long id, string name, int age, double wage); 
	void setId(long id); 
	long getId(); 
	void setName(string name); 
	string getName(); 
	void setAge(int age); 
	int getAge(); 
	void setWage(double wage); 
	double getWage(); 
	string toString(); 
};

