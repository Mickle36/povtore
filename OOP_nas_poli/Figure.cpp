#include "Figure.hpp"

int Figure::get_sides()
{
	return this->sides;
}

std::string Figure::get_name_figure()
{
	return this->name_figure;
}

void Figure::about_me()
{
	std::cout << this->get_name_figure() + ": \n";
	if (this->check_fig())
	{
		std::cout << "����������\n";
	}
	std::cout << "���������� ������: " << get_sides() << std::endl << std::endl;
}

bool Figure::check_fig()
{
	return true;
}
