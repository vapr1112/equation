#include "square_equation.h"

void square_equation::root_equation()noexcept
{
    if (b * b - 4 * a * c >= 0)
    {
        x = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;
        x_2 = (-b - sqrt(b * b - 4 * a * c)) / 2 * a;
        cout << x << ' ' << x_2;
    }
}