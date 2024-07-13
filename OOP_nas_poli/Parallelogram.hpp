#pragma once
#include "Quadrangle.hpp"

class Parallelogram :public Quadrangle
{
public:
	Parallelogram(int a, int b, int A, int B)
	{
		this->name_figure = "ֿאנאככוכמדנאלל";
		this->a = this->c = a;
		this->b = this->d = b;
		this->A = this->C = A;
		this->B = this->D = B;
	}
};

