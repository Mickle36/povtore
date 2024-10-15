#pragma once
#include "Quadrangle.hpp"

class Rhomb : public Quadrangle
{
public:
	Rhomb(int a, int b, int c, int d, int A, int B, int C, int D): Quadrangle(a, b, c, d, A, B, C, D)
	{
		this->name_figure = "Ромб";
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->A = A;
		this->C = C;
		this->B = B;
		this->D = D;
		this->check_fig();
	}
	void check_fig() override;
};

