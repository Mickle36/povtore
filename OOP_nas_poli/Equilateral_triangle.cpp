#include "Equilateral_triangle.hpp"

void Equilateral_triangle::check_fig()
{
	if ((this->a != this->b) || (this->a != this->c))
	{
		throw bad_figure("� ������ \"" + this->get_name_figure() + "\", ������� �� �����");
	}
	else if ((this->A != 60) || (this->B != 60) || (this->C != 60))
	{
		throw bad_figure("� ������ \"" + this->get_name_figure() + "\", ������ ���� �� ����� 60 ����.");
	}
	else if (this->sum_angels != 180)
	{
		throw bad_figure("� ������ \"" + this->get_name_figure() + "\", ����� ����� �� ����� 180 ����.");
	}
	else if (this->get_sides() != 3)
	{
		throw bad_figure("� ������ \"" + this->get_name_figure() + "\", ����� ������ �� ����� 3");
	}
}
