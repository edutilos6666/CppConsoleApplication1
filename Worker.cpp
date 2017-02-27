#include "stdafx.h"
#include "Worker.h"


Worker::Worker()
{
}


Worker::~Worker()
{
}


Worker::Worker(long id, string name, int age, double wage) {
	this->id = id; 
	this->name = name; 
	this->age = age; 
	this->wage = wage; 
}

void Worker::setId(long id) {
	this->id = id; 
}

void Worker::setName(string name) {
	this->name = name; 
}

void Worker::setAge(int age) {
	this->age = age; 
}

void Worker::setWage(double wage) {
	this->wage = wage; 
}

long Worker::getId() {
	return this->id; 
}
string Worker::getName() {
	return this->name; 
}

int Worker::getAge() {
	return this->age; 
}

double Worker::getWage() {
	return this->wage; 
}


string Worker::toString() {
	stringstream ss; 
	ss << "[" << this->id << ", " << this->name << ", "
		<< this->age << ", " << this ->wage << "]"; 
	return ss.str(); 
}