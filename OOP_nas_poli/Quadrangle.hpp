#pragma once
#include "Figure.hpp"
class Quadrangle : public Figure
{
protected:
	int a, b, c, d;
	int A, B, C, D;
public:
	Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D)
	{
		this->name_figure = "Четырехугольник";
		this->sides = 3;
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
	}
	void about_me() override;
};

