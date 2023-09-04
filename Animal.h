#pragma once
#include <string>
#include <iostream>

class Animal {
public:
	std::string name = "unknown", mom = "unknown", dad = "unknown";
	unsigned int paw_count = 0;
	virtual void voice() = 0;
};

template <typename T>
T operator+(T mom, T dad) {
	T child;
	child.mom = mom.name;
	child.dad = dad.name;
	return child;
}