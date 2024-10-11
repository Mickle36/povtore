#pragma once
#include "Quadrangle.hpp"

class Parallelogram :public Quadrangle
{
public:
	Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D): Quadrangle(a, b, c, d, A, B, C, D)
	{
		this->name_figure = "ֿאנאככוכמדנאלל";
		this->a = a;
		this->c = c;
		this->b = b;
		this->d = d;
		this->A = A;
		this->C = C;
		this->B = B;
		this->D = D;
	}
	void check_fig() override;
};

