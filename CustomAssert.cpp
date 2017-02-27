#include "stdafx.h"
#include "CustomAssert.h"

void CustomAssert::assertInt(int x1, int x2) {
	if (x1 != x2) throw exception("int equality check failed."); 
}
void CustomAssert::assertString(string x1, string x2) {
	if (x1 != x2) throw exception("string equality check failed."); 
}
void CustomAssert::assertLong(long x1, long x2) {
	if (x1 != x2) throw exception("long equality check failed."); 
}
void CustomAssert::assertDouble(double x1, double x2) {
	if (x1 != x2) throw exception("double equality check failed."); 
}
void CustomAssert::assertBool(bool x1, bool x2) {
	if (x1 != x2) throw exception("bool equality check failed."); 
}

void CustomAssert::assertWorker(Worker w1, Worker w2) {
	assertLong(w1.getId(), w2.getId()); 
	assertString(w1.getName(), w2.getName()); 
	assertInt(w1.getAge(), w2.getAge()); 
	assertDouble(w1.getWage(), w2.getWage()); 
}