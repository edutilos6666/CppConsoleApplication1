// CppConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <sstream>
#include "Person.h"
#include "PersonDAO.h"
#include "Worker.h"
#include "CustomAssert.h"
#include "WorkerDAO.h"
using namespace std; 

void testMathOperators(void); 
void testUserInput(void); 
void testUserInput2(); 
void testPerson();
void testPersonDAO(); 
void testWorker(); 
void testWorkerWithCustomAssert(); 
void testWorkerDAO(); 
int main()
{
	//testMathOperators(); 
	//testUserInput(); 
	//testPerson(); 
	// testPersonDAO(); 
	//testWorker(); 
	//testWorkerWithCustomAssert(); 
	testWorkerDAO(); 
    return 0;
}


void testWorkerDAO() {
	WorkerDAOImpl dao; 
	dao.save(Worker(1, "foo", 10, 100.0));
	dao.save(Worker(2, "bar", 20, 200.0)); 
	CustomAssert ca; 

	vector<Worker> all = dao.findAll(); 
	cout << "all  workers : " << endl; 
	for (auto it = all.cbegin(); it != all.cend(); ++it) {
		Worker w = *it; 
		cout << w.toString() << endl;
	}

	Worker temp = dao.findById(1); 
	ca.assertWorker(Worker(1, "foo", 10, 100.0), temp); 
	temp = dao.findById(2); 
	ca.assertWorker(Worker(2, "bar", 20, 200.0), temp); 
	dao.remove(1); 
	all = dao.findAll(); 
	ca.assertInt(1, all.size()); 
	dao.update(2, Worker(2, "newbar", 66, 666.6)); 
	temp = dao.findById(2); 
	ca.assertWorker(Worker(2, "newbar", 66, 666.6), temp); 
}

void testWorkerWithCustomAssert() {
	Worker w1(1, "foo", 10, 100.0); 
	CustomAssert ca; 
	ca.assertLong(1, w1.getId()); 
	ca.assertString("foo", w1.getName()); 
	ca.assertInt(10, w1.getAge()); 
	ca.assertDouble(100.0, w1.getWage()); 
	cout << "success" << endl; 
}

void testWorker() {
	Worker w1(1, "foo", 10, 100.0); 
	cout << w1.toString() << endl; 
	w1.setId(2); 
	w1.setName("newfoo"); 
	w1.setAge(66); 
	w1.setWage(666.6); 
	cout << w1.toString() << endl; 
	
}

void testPersonDAO() {
	PersonDAOImpl dao; 
	dao.savePerson(Person(1, "foo", 10, 100.0, true)); 
	dao.savePerson(Person(2, "bar", 20, 200.0, false)); 

	vector<Person> vector = dao.findAll(); 
	for (auto it = vector.cbegin(); it != vector.cend(); ++it) {
		Person p = *it; 
		cout << p.toString(); 
	}

	cout << "after update: " << endl; 
	dao.updatePerson(1, Person(1, "newfoo", 66, 666.6, false)); 
	vector = dao.findAll(); 
	for (auto it = vector.cbegin(); it != vector.cend(); ++it) {
		Person p = *it; 
		cout << p.toString(); 
	}

	cout << "after delete: " << endl; 
	dao.deletePerson(1); 
	vector = dao.findAll();
	for (auto it = vector.cbegin(); it != vector.cend(); ++it) {
		Person p = *it;
		cout << p.toString();
	}


	Person p2 = dao.findById(2); 
	cout << "p2 = " << p2.toString(); 
}

void testPerson() {
	Person p1(1, "foo", 10, 100.0, true); 
	cout << p1.toString() << endl; 
	Person* p2 = new Person(2, "bar", 20, 200.0, false); 
	cout << p2->toString() << endl; 
	p2 = nullptr; 
}
void testUserInput2() {
	string name; 
	int age; 
	double wage; 
	bool active; 
	cout << "enter name: "; 
	cin >> name; 
	cin.clear(); 
	cout << "enter age: "; 
	cin >> age; 
	cin.clear();
	cout << "enter wage: ";
	cin >> wage; 
	cin.clear(); 
	cout << "enter active: "; 
	cin >> boolalpha >> active; 
	cin.clear(); 

	cout << "name = " << name << endl; 
	cout << "age = " << age << endl; 
	cout << "wage = " << wage << endl; 
	cout << "active = " << boolalpha << active << endl; 
}

void testUserInput() {
	string name; 
	int age; 
	double wage; 
	bool active; 
	string temp; 
	cout << "enter name: "; 
	getline(cin, name); 
	cout << "enter age: "; 
	getline(cin, temp); 
	stringstream ss(temp); 
	ss >> age; 
	cout << "enter wage: "; 
	getline(cin, temp); 
	stringstream ss2(temp); 
	ss2 >> wage; 
	cout << "enter active: "; 
	getline(cin, temp); 
	stringstream ss3(temp); 
	ss3 >> boolalpha >>  active; 

	cout << "Name = " << name << endl; 
	cout << "Age = " << age << endl; 
	cout << "Wage = " << wage << endl; 
	cout << "Active = " << boolalpha<< active << endl; 
}

void testMathOperators() {
	int a = 10, b = 20; 
	int sum = a + b; 
	int diff = a - b; 
	int multi = a * b; 
	int div = b / a; 
	cout << "sum = " << sum << endl; 
	cout << "diff = " << diff << endl; 
	cout << "multi = " << multi << endl; 
	cout << "div = " << div << endl; 
}

