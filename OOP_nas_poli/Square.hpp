#pragma once
#include "Quadrangle.hpp"

class Square :public Quadrangle
{
public:
	Square(int a, int b, int c, int d, int A, int B, int C, int D): Quadrangle(a, b, c, d, A, B, C, D)
	{
		this->name_figure = " вадрат";
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
	}
	bool check_fig() override;
};

