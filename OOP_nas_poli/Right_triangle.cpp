#include "Right_triangle.hpp"

void Right_triangle::check_fig()
{
	if (this->C != 90)
	{
		throw bad_figure("� ������ \"" + this->get_name_figure() + "\", ���� � �� ����� 90 ����.");
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
