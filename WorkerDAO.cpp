#include "stdafx.h"
#include "WorkerDAO.h"


void WorkerDAOImpl::save(Worker w) {
	this->container.insert(pair<long, Worker>(w.getId(), w)); 
}

void WorkerDAOImpl::update(long id, Worker w) {
	this->container.erase(id); 
	this->container.insert(pair<long, Worker>(id, w)); 
}

void WorkerDAOImpl::remove(long id) {
	this->container.erase(id); 
}

Worker WorkerDAOImpl::findById(long id) {
	return this->container[id]; 
}

vector<Worker> WorkerDAOImpl::findAll() {
	vector<Worker> v; 
	for (auto it = this->container.cbegin(); it != this->container.cend(); ++it) {
		Worker w = (*it).second; 
		v.push_back(w); 
	}
	return v; 
}