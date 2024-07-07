#include "Triangle.hpp"

void Triangle::about_me()
{
	std::cout << this->get_name_figure() + ": " << get_sides() << std::endl;
}
