#pragma once
#include "Triangle.hpp"

class Right_triangle :public Triangle
{
public:
	Right_triangle(int a, int b, int c, int A, int B)
	{
		this->name_figure = "Прямоугольный треугольник";
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = 90;
	}
};

