#include "Square.hpp"

void Square::check_fig()
{
	bool true_sides = (this->a != this->c) || (this->b != this->d) || (this->a != this->d);
	bool true_angels = (this->A != 90) || (this->B != 90) || (this->C != 90) || (this->D != 90);
	if (true_sides)
	{
		throw bad_figure("у фигуры \"" + this->get_name_figure() + "\", стороны не равны");
	}
	else if (true_angels)
	{
		throw bad_figure("у фигуры \"" + this->get_name_figure() + "\", все углы не равны 90");
	}
	else if (this->sides != 4)
	{
		throw bad_figure("количесмтво сторон не равно 4");
	}
	else if (sum_angiles != 360)
	{
		throw bad_figure("сумма углов фигуры \"" + this->get_name_figure() + "\" не равна 360");
	}
}
