#include "equation.h"
#include "line_equation.h"
#include "square_equation.h"

int main()
{
	setlocale(LC_ALL, "rus");

	line_equation equation_1{ 5, 10 };

	square_equation equation_2{ 1, 7, 10 };

	equation_1.root_equation();

	cout << "\n";

	equation_2.root_equation();

	return 0;
}