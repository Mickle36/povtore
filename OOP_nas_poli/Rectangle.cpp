#include "Rectangle.hpp"

void Rectangle::check_fig()
{
	bool true_sides = (this->a != this->c) || (this->b != this->d);
	bool true_angels = (this->A != 90) || (this->B != 90) || (this->C != 90) || (this->D != 90);
	if (true_sides)
	{
		throw bad_figure("� ������ \"" + this->get_name_figure() + "\", ������� a,c � b,d ������� �� �����");
	}
	else if (true_angels)
	{
		throw bad_figure("� ������ \"" + this->get_name_figure() + "\", ��� ���� �� ����� 90");
	}
	else if (this->sides != 4)
	{
		throw bad_figure("����������� ������ �� ����� 4");
	}
	else if (sum_angiles != 360)
	{
		throw bad_figure("����� ����� ������ \"" + this->get_name_figure() + "\" �� ����� 360");
	}
}
