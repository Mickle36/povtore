#include <iostream>
#include "Figure.hpp"
#include "Triangle.hpp"
#include "Quadrangle.hpp"
#include "Right_triangle.hpp"
#include "Isosceles_triangle.hpp"

int main()
{
	setlocale(LC_ALL, "ru");
	Figure simple_fig;
	Triangle triang(10, 20, 30, 50, 60, 70);
	Quadrangle quadr(10, 20, 30, 40, 50, 60, 70, 80);
	Right_triangle rig_triang(10, 20, 30, 50, 60);
	Isosceles_triangle iso_triangle(10, 20, 50, 60);
	
	simple_fig.about_me();
	triang.about_me();
	quadr.about_me();
	rig_triang.about_me();
	iso_triangle.about_me();
	return 0;
}