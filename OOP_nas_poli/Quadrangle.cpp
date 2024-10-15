#include "Quadrangle.hpp"

void Quadrangle::about_me()
{
	std::cout << this->get_name_figure() + " (������� " << this->a << ", " << this->b << ", " << this->c << ", " <<
	this->d << "; ���� " << this->A << ", " << this->B << ", " << this->C << ", " << this->D << ") ������" << std::endl;
}

void Quadrangle::check_fig()
{
	if (this->sides != 4)
	{
		throw bad_figure("����������� ������ �� ����� 4");
	}
	else if (sum_angiles != 360)
	{
		throw bad_figure("����� ����� ������ \"" + this->get_name_figure() + "\" �� ����� 360");
	}
}
