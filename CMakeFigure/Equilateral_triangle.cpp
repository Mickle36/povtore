#include "Equilateral_triangle.hpp"

bool Equilateral_triangle::check_fig()
{
	bool truls_sides = (this->a == this->b && this->a == this->c);
	bool truls_angels = (this->A == 60) && (this->B == 60) && (this->C == 60);
	bool truls_with_triang = Triangle::check_fig();
	if ((truls_sides) && (truls_angels) && truls_with_triang)
	{
		return true;
	}
    return false;
}
