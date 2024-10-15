#include "Isosceles_triangle.hpp"

void Isosceles_triangle::check_fig()
{

	if ((this->a != this->c) && (this->A != this->C))
	{
		throw bad_figure("� ������ \"" + this->get_name_figure() + "\", ������� a � c � ���� A � C �� �����");
	}
	else if (this->a != this->c)
	{
		throw bad_figure("� ������ \"" + this->get_name_figure() + "\", ������� a � c �� �����");
	}
	else if (this->A != this->C)
	{
		throw bad_figure("� ������ \"" + this->get_name_figure() + "\", ���� A � C �� �����");
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
