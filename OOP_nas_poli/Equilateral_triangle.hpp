#pragma once
#include "Triangle.hpp"

class Equilateral_triangle : public Triangle
{
public:
	Equilateral_triangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C)
	{
		this->name_figure = "Равносторонний треугольник";
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;
		this->check_fig();
	}
	void check_fig() override;
};
