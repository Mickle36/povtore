#include "Isosceles_triangle.hpp"

void Isosceles_triangle::check_fig()
{

	if ((this->a != this->c) && (this->A != this->C))
	{
		throw bad_figure("у фигуры \"" + this->get_name_figure() + "\", стороны a и c и углы A и C не равны");
	}
	else if (this->a != this->c)
	{
		throw bad_figure("у фигуры \"" + this->get_name_figure() + "\", стороны a и c не равны");
	}
	else if (this->A != this->C)
	{
		throw bad_figure("у фигуры \"" + this->get_name_figure() + "\", углы A и C не равны");
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
