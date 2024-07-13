#pragma once
#include "Quadrangle.hpp"

class Rhomb : public Quadrangle
{
public:
	Rhomb(int a, int A, int B)
	{
		this->name_figure = "Ромб";
		this->a = this->b = this->c = this->d = a;
		this->A = this->C = A;
		this->B = this->D = B;
	}
};

