#include "Parallelogram.hpp"

void Parallelogram::check_fig()
{
	bool true_sides = (this->a != this->c) || (this->b != this->d);
	bool true_angels = (this->A != this->C) || (this->B != this->D);
	if (true_sides)
	{
		throw bad_figure("� ������ \"" + this->get_name_figure() + "\", ������� a,c � b,d ������� �� �����");
	}
	else if (true_angels)
	{
		throw bad_figure("� ������ \"" + this->get_name_figure() + "\", ���� A,C � B,D ������� �� �����");
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
