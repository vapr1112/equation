#include "square_equation.h"

void square_equation::root_equation()noexcept
{
    if (b * b - 4 * a * c < 0) throw negative_D("дискриминант отрицательный, корней нет");
       x.first = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;
       x.second = (-b - sqrt(b * b - 4 * a * c)) / 2 * a;
}