#include "Triangle.hpp"

void Triangle::about_me()
{
	std::cout << this->get_name_figure() + ": "<< std::endl;
	if (this->check_fig())
	{
		std::cout << "����������\n";
	}
	else { std::cout << "������������\n"; }
	std::cout << "�������: a=" << this->a << " b=" << this->b << " c=" << this->c << std::endl;
	std::cout << "����: A=" << this->A << " B=" << this->B << " C=" << this->C << std::endl << std::endl;
}

bool Triangle::check_fig()
{
	int sum_angle = this->A + this->B + this->C;
	if ((get_sides() == 3) && (sum_angle == 180))
	{
		return true;
	}
	else
	{
		return false;
	}
}
