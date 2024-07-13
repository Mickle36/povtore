#pragma once
#include "Quadrangle.hpp"

class Rectangle :public Quadrangle
{
public:
	Rectangle(int a, int b)
	{
		this->name_figure = "Прямоугольник";
		this->a = this->c = a;
		this->b = this->d = b;
		this->A = this->B = this->C = this->D = 90;
	}
};

