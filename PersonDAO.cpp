#include "stdafx.h"
#include "PersonDAO.h"



void PersonDAOImpl::savePerson(Person p) {
	this->personContainer.insert(pair<long, Person>(p.getId(), p)); 
}
void PersonDAOImpl::updatePerson(long id, Person newP) {
	pair<long, Person> p(id, newP); 
	this->personContainer.erase(id); 
	this->personContainer.insert(p); 
}
void PersonDAOImpl::deletePerson(long id) {
	this->personContainer.erase(id); 
}
Person PersonDAOImpl::findById(long id) {
	return this->personContainer[id]; 
}
vector<Person> PersonDAOImpl::findAll() {
	vector<Person> vector; 
	for (auto it = this->personContainer.begin(); it != this->personContainer.end(); ++it) {
		Person p = (*it).second; 
		vector.push_back(p); 
	}
	return vector; 
}

