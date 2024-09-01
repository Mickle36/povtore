#pragma once
#include "Triangle.hpp"

class Isosceles_triangle : public Triangle
{
public:
	Isosceles_triangle(int a, int b, int A, int B): Triangle(a, b, c, A, B, C)
	{
		this->name_figure = "Равнобедренный треугольник";
		this->a = this->c = a;
		this->b = b;
		this->A = this->C = A;
		this->B = B;
	}
};

