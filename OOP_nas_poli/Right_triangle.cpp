#include "Right_triangle.hpp"

void Right_triangle::check_fig()
{
	if (this->C != 90)
	{
		throw bad_figure("у фигуры \"" + this->get_name_figure() + "\", угол С не равен 90 град.");
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
