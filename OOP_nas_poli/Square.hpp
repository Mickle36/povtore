#pragma once
#include "Quadrangle.hpp"

class Square :public Quadrangle
{
public:
	Square(int a)
	{
		this->name_figure = " вадрат";
		this->a = this->b = this->c = this->d = a;
		this->A = this->B = this->C = this->D = 90;
	}
};

