#include "Triangle.hpp"

void Triangle::about_me()
{
	std::cout << this->get_name_figure() + " (������� " << this->a << ", " << this->b << ", " << this->c << "; \
���� " << this->A << ", " << this->B << ", " << this->C << ") ������" << std::endl;
}

void Triangle::check_fig()
{
	if (get_sides() != 3)
	{
		throw bad_figure("����������� ������ �� ����� 3");
	}
	else if (this->sum_angels != 180)
	{
		throw bad_figure("����� ����� ������ \"" + this->get_name_figure() +"\" �� ����� 180");
	}
}
