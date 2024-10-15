#pragma once
#include "Quadrangle.hpp"

class Rectangle :public Quadrangle
{
public:
	Rectangle(int a, int b, int c, int d, int A, int B, int C, int D): Quadrangle(a, b, c, d, A, B, C, D)
	{
		this->name_figure = "Прямоугольник";
		this->a = a;
		this->c = c;
		this->b = b;
		this->d = d;
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
		this->check_fig();
	}
	void check_fig() override;
};

