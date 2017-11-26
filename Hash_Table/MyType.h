#pragma once

#include "Hashable.h"

#ifndef MY_TYPE
#define MY_TYPE

class MyType : public Hashable {
private:
	int data;

public:
	MyType();
	MyType(int);
	int getData();
	int hashCode();
};

MyType::MyType() {}

MyType::MyType(int data) {
	this->data = data;
}

int MyType::hashCode() {
	return 13 * this->data;
}

int MyType::getData() {
	return this->data;
}

#endif // MY_TYPE
