#pragma once
#include "Figure.hpp"
class Quadrangle : public Figure
{
public:
	Quadrangle()
	{
		this->name_figure = "Четырехугольник";
		this->sides = 4;
	}
	void about_me() override;
};

