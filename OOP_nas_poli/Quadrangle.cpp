#include "Quadrangle.hpp"

void Quadrangle::about_me()
{
	std::cout << this->get_name_figure() + " (стороны " << this->a << ", " << this->b << ", " << this->c << ", " <<
	this->d << "; углы " << this->A << ", " << this->B << ", " << this->C << ", " << this->D << ") создан" << std::endl;
}

void Quadrangle::check_fig()
{
	if (this->sides != 4)
	{
		throw bad_figure("количесмтво сторон не равно 4");
	}
	else if (sum_angiles != 360)
	{
		throw bad_figure("сумма углов фигуры \"" + this->get_name_figure() + "\" не равна 360");
	}
}
