#include <iostream>
#include <cstdlib>
#include "Figure.hpp"
#include "Triangle.hpp"
#include "Quadrangle.hpp"
#include "Right_triangle.hpp"
#include "Isosceles_triangle.hpp"
#include "Equilateral_triangle.hpp"
#include "Square.hpp"
#include "Parallelogram.hpp"
#include "Rhomb.hpp"
#include "Rectangle.hpp"

int main()
{
	setlocale(LC_ALL, "ru");

	try
	{
		Figure simple_fig;
		simple_fig.check_fig();
		simple_fig.about_me();
		Triangle triang(10, 20, 30, 50, 60, 70);
		triang.check_fig();
		triang.about_me();
		Right_triangle rig_triang(10, 20, 30, 50, 40, 90);
		rig_triang.about_me();
		Isosceles_triangle iso_triangle(10, 20, 10, 55, 70, 55);
		iso_triangle.about_me();
		Equilateral_triangle equ_triangle(20, 20, 20, 60, 60, 60);
		equ_triangle.about_me();
		std::cout << std::endl;

		Quadrangle quadr(10, 20, 30, 40, 80, 100, 80, 100);
		quadr.check_fig();
		quadr.about_me();
		Rectangle rectangle(10, 20, 10, 20, 90, 90, 90, 90);
		rectangle.about_me();
		Square squ(10, 10, 10, 10, 90, 90, 90, 90);
		squ.about_me();
		Parallelogram parall(10, 20, 10, 20, 80, 100, 80, 100);
		parall.about_me();
		Rhomb rhomb(10, 10, 10, 10, 80, 100, 80, 100);
		rhomb.about_me();

	}
	catch (const bad_figure& ex)
	{
		std::cout << "Ошибка создания фигуры. Причина: " << ex.what() << std::endl;
	}

	std::system("pause");
	return 0;
}