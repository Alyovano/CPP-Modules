#ifndef BASE_HPP
#define BASE_HPP

#include <stdlib.h> // random
#include <time.h> // time for random
#include <string>
#include <iostream>
#include <unistd.h>

class Base
{
public:
	virtual ~Base() {
	};
};

class A : public Base
{
public:
	virtual ~A() {
	};
};

class B : public Base
{
public:
	virtual ~B() {
	};
};

class C : public Base
{
public:
	virtual ~C() {
	};
};


#endif