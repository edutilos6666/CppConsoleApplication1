#pragma once
#include "Person.h"
#include <vector>
#include <map>
class PersonDAO
{
public:
	//virtual ~PersonDAO();
	virtual void savePerson(Person p) = 0; 
	virtual void updatePerson(long id, Person newP) = 0; 
	virtual void deletePerson(long id) = 0; 
	virtual Person findById(long id) = 0; 
	virtual vector<Person> findAll() = 0; 
};


class PersonDAOImpl : public PersonDAO {
private:
	map<long , Person> personContainer; 
public: 
	void savePerson(Person p);
	void updatePerson(long id, Person newP);
	void deletePerson(long id);
	Person findById(long id);
	vector<Person> findAll();
};
