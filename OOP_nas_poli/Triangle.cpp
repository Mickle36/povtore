#include "Triangle.hpp"

void Triangle::about_me()
{
	std::cout << this->get_name_figure() + " (стороны " << this->a << ", " << this->b << ", " << this->c << "; \
углы " << this->A << ", " << this->B << ", " << this->C << ") создан" << std::endl;
}

void Triangle::check_fig()
{
	int sum_angle = this->A + this->B + this->C;
	if (get_sides() != 3)
	{
		throw bad_triangele("количесмтво сторон не равно 3");
	}
	else if (sum_angle != 180)
	{
		throw bad_triangele("сумма углов не равна 180");
	}
}
