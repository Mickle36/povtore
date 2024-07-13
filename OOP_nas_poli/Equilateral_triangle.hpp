#pragma once
#include "Triangle.hpp"

class Equilateral_triangle : public Triangle
{
public:
	Equilateral_triangle(int a)
	{
		this->name_figure = "Равносторонний треугольник";
		this->a = this->b =this->c = a;
		this->A = this->B = this->C = 60;
	}
};
