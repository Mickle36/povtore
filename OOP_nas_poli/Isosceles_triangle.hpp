#pragma once
#include "Triangle.hpp"

class Isosceles_triangle : public Triangle
{
public:
	Isosceles_triangle(int a, int b, int c, int A, int B, int C): Triangle(a, b, c, A, B, C)
	{
		this->name_figure = "Равнобедренный треугольник";
		this->a = a;
		this->c = c;
		this->b = b;
		this->A = A;
		this->C = C;
		this->B = B;
		this->check_fig();
	}
	void check_fig() override;
};
