#include "Quadrangle.hpp"

void Quadrangle::about_me()
{
	std::cout << this->get_name_figure() + ": " << std::endl;
	std::cout << "Стороны: a=" << this->a << " b=" << this->b << " c=" << this->c << " d=" << this->d << std::endl;
	std::cout << "Углы: A=" << this->A << " B=" << this->B << " C=" << this->C << " D=" << this->D << std::endl << std::endl;
}
