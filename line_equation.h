#pragma once
#include "equation.h"

class line_equation :
     public virtual equation
{
protected:
    int c;
    double x;
public:
    line_equation()noexcept = default;
    line_equation(int b_p, int c_p) noexcept : equation(0, b_p), c{c_p}{}
    //ищет корни уравнения
    virtual void root_equation() noexcept override;

    int get_c()const noexcept { return c; }
    void set_c(int c_p)noexcept { c = c_p; }
    //возвращает корень уравнения
    double get_root()const noexcept { return x; }
};

