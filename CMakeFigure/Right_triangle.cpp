#include "Right_triangle.hpp"

bool Right_triangle::check_fig()
{
	if ((this->C == 90)&&Triangle::check_fig())
	{
		return true;
	}
	return false;
}