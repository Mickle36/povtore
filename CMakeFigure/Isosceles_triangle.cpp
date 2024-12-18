#include "Isosceles_triangle.hpp"

bool Isosceles_triangle::check_fig()
{
	if ((this->a==this->c)&&(this->A==this->C)&&Triangle::check_fig())
	{
		return true;
	}
	return false;
}
