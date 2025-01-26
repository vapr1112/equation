#pragma once
#include "equation.h"
class square_equation :
    public virtual equation
{
protected:
    pair<double, double> x;
    int c;
public:
    square_equation()noexcept = default;
    square_equation(int a_p, int b_p, int c_p)noexcept : equation(a_p, b_p), c{c_p}{}

    //ищет корни уравнения
    virtual void root_equation()noexcept override;

    int get_c()const noexcept { return c; }
    void set_c(int c_p)noexcept { c = c_p; }
    //возвращает корни уравнений
    pair<double, double> get_x()const noexcept { return x; }
};

