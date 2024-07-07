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
	std::cout << this->get_name_figure() + ": " << get_sides() << std::endl;
}
