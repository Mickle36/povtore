#pragma once
#include "Figure.hpp"
class Triangle : public Figure
{
public:
	Triangle()
	{
		this->name_figure = "�����������";
		this->sides = 3;
	}
	void about_me() override;
};

