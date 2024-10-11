#include "Triangle.hpp"

void Triangle::about_me()
{
	std::cout << this->get_name_figure() + " (������� " << this->a << ", " << this->b << ", " << this->c << "; \
���� " << this->A << ", " << this->B << ", " << this->C << ") ������" << std::endl;
}

void Triangle::check_fig()
{
	int sum_angle = this->A + this->B + this->C;
	if (get_sides() != 3)
	{
		throw bad_triangele("����������� ������ �� ����� 3");
	}
	else if (sum_angle != 180)
	{
		throw bad_triangele("����� ����� �� ����� 180");
	}
}
