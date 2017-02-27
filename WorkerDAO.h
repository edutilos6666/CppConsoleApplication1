#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "Worker.h"
using namespace std; 

class WorkerDAO
{
public:
	virtual void save(Worker w) = 0; 
	virtual void update(long id, Worker w) = 0; 
	virtual void remove(long id) = 0; 
	virtual Worker findById(long id) = 0; 
	virtual vector<Worker> findAll() = 0; 
};


class WorkerDAOImpl: public WorkerDAO{
private: 
	map<long, Worker> container; 
public: 
	void save(Worker w); 
	void update(long id, Worker w); 
	void remove(long id); 
	Worker findById(long id); 
	vector<Worker> findAll(); 
};


