#pragma once
#include "equation.h"

class line_equation :
     public virtual equation
{
public:
    line_equation(int b_p, int c_p) noexcept : equation(0, b_p, c_p){}

    virtual void root_equation() noexcept;

    double get_root()const noexcept { return x; }
};

