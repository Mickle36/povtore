#include "Triangle.hpp"

void Triangle::about_me()
{
	std::cout << this->get_name_figure() + " (стороны " << this->a << ", " << this->b << ", " << this->c << "; \
углы " << this->A << ", " << this->B << ", " << this->C << ") создан" << std::endl;
}

void Triangle::check_fig()
{
	if (get_sides() != 3)
	{
		throw bad_figure("количесмтво сторон не равно 3");
	}
	else if (this->sum_angels != 180)
	{
		throw bad_figure("сумма углов фигуры \"" + this->get_name_figure() +"\" не равна 180");
	}
}
