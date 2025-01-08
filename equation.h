#pragma once
#include <iostream>

using namespace std;

class equation
{
protected:
	//уравнение имеет вид ax^2 + bx + c
	int a;
	int b;
	int c;
	double x;

	equation() = default;

	equation(int a_p, int b_p, int c_p) :  a{a_p}, b{b_p}, c{c_p}{}

	virtual void root_equation(){}
};

