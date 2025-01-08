#pragma once
#include "equation.h"
class square_equation :
    public virtual equation
{
private:
    double x_2;
public:
    square_equation(int a_p, int b_p, int c_p)noexcept : equation(a_p, b_p, c_p) {}

    virtual void root_equation()noexcept;

    double get_x()const noexcept { return x; }
    double get_x_2()const noexcept { return x_2; }
};

