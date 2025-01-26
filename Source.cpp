#include "equation.h"
#include "line_equation.h"
#include "square_equation.h"

int main()
{
	setlocale(LC_ALL, "rus");

	line_equation equation_1{ 5, 10 };

	square_equation equation_2{ 1, 7, 10 };

	try
	{

		equation_1.root_equation();

		cout << equation_1.get_root() << "\n";

		equation_2.root_equation();

		cout << equation_2.get_x().first << equation_2.get_x().second;

	}
	catch (const negative_D& D)
	{
		cout << D.what();
	}

	return 0;
}