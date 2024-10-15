#include "Equilateral_triangle.hpp"

void Equilateral_triangle::check_fig()
{
	if ((this->a != this->b) || (this->a != this->c))
	{
		throw bad_figure("у фигуры \"" + this->get_name_figure() + "\", стороны не равны");
	}
	else if ((this->A != 60) || (this->B != 60) || (this->C != 60))
	{
		throw bad_figure("у фигуры \"" + this->get_name_figure() + "\", каждый угол не равен 60 град.");
	}
	else if (this->sum_angels != 180)
	{
		throw bad_figure("у фигуры \"" + this->get_name_figure() + "\", сумма углов не равна 180 град.");
	}
	else if (this->get_sides() != 3)
	{
		throw bad_figure("у фигуры \"" + this->get_name_figure() + "\", сумма сторон не равна 3");
	}
}
