#pragma once
#include "Figure.hpp"
class Triangle : public Figure
{
protected:
	int a, b, c;
	int A, B, C;
public:
	Triangle()
	{
		this->name_figure = "Треугольник";
		this->sides = 3;
	}
	Triangle(int a, int b, int c, int A, int B, int C)
	{
		this->name_figure = "Треугольник";
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;
	}
	void about_me() override;
};

