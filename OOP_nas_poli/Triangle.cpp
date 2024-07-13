#include "Triangle.hpp"

void Triangle::about_me()
{
	std::cout << this->get_name_figure() + ": "<< std::endl;
	std::cout << "Стороны: a=" << this->a << " b=" << this->b << " c=" << this->c << std::endl;
	std::cout << "Углы: A=" << this->A << " B=" << this->B << " C=" << this->C << std::endl << std::endl;
}
