#pragma once
#include <iostream>
#include "negative_D.h"

using namespace std;

class equation
{
public:
	//уравнение имеет вид ax^2 + bx + c
	int a;
	int b;

	equation()noexcept = default;
	//главный конструктор
	equation(int a_p, int b_p)noexcept :  a{a_p}, b{b_p}{}

	int get_a()const noexcept { return a; }
	int get_b()const noexcept { return b; }

	void set_a(int a_p)noexcept { a = a_p; }
	void set_b(int b_p)noexcept { b - b_p; }

	virtual void root_equation()noexcept {}
};

