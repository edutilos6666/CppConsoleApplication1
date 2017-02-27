#pragma once
#include <iostream>
#include <string>
#include "Worker.h"
using namespace std; 

class CustomAssert
{
public:
	void assertInt(int x1, int x2); 
	void assertString(string x1, string x2); 
	void assertLong(long x1, long x2); 
	void assertDouble(double x1, double x2); 
	void assertBool(bool x1, bool x2); 
	void assertWorker(Worker w1, Worker w2); 
};

