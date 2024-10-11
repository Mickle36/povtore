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
		Triangle triang(10, 20, 30, 50, 60, 80);
		triang.check_fig();
		triang.about_me();
		//Right_triangle rig_triang(10, 20, 30, 40, 50, 90);
		//rig_triang.about_me();

	}
	catch (const bad_triangele& ex)
	{
		std::cout << "Ошибка создания фигуры. Причина: " << ex.what() << std::endl;
	}
	//Figure simple_fig;
	
	/*Quadrangle quadr(10, 20, 30, 40, 80, 100, 80, 100);
	Isosceles_triangle iso_triangle(10, 20, 10, 55, 70, 55);
	Equilateral_triangle equ_triangle(20, 20, 20, 60, 60, 60);
	Square squ(10, 10, 10, 10, 90, 90, 90, 90);
	Parallelogram parall(10, 20, 10, 20, 80, 100, 80, 100);
	Rhomb rhomb(10, 10, 10, 10, 80, 100, 80, 100);
	Rectangle rectangle(10, 20, 10, 20, 90, 90, 90, 90);*/
	
	//simple_fig.about_me();
	/*quadr.about_me();
	iso_triangle.about_me();
	equ_triangle.about_me();
	rectangle.about_me();
	squ.about_me();
	parall.about_me();
	rhomb.about_me();*/

	/*void Triangle::foo()
	{
		int sum_angle = this->A + this->B + this->C;
		try
		{
			if (!this->check_fig())
			{
				throw bad_triangele();
			}
			this->about_me();
		}
		catch (const bad_triangele& ex)
		{
			std::cout << ex.what() << std::endl;
		}
	}*/

	std::system("pause");
	return 0;
}