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
	std::cout << "Количество сторон: " << get_sides() << std::endl << std::endl;
}

void Figure::check_fig()
{
	if (this->get_sides() != 0)
	{
		throw bad_triangele("У фигуры не можут быть стороны");
	};
}
