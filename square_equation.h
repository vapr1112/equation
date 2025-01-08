#pragma once
#include "equation.h"
class square_equation :
    public virtual equation
{
private:
    double x_2;
public:
    square_equation(int a_p, int b_p, int c_p) : equation(a_p, b_p, c_p) {}

    virtual void root_equation()
    {
        x = (-b + sqrt(b*b - 4 * a * c)) / 2 * a;
        x_2 = (-b - sqrt(b * b - 4 * a * c)) / 2 * a;
        cout << x << ' ' << x_2;
    }

    double get_x()const noexcept { return x; }
    double get_x_2()const noexcept { return x_2; }
};

