#include "Quadrangle.hpp"

void Quadrangle::about_me()
{
	std::cout << this->get_name_figure() + ": " << std::endl;
	if (this->check_fig())
	{
		std::cout << "����������\n";
	}
	else { std::cout << "������������\n"; }
	std::cout << "�������: a=" << this->a << " b=" << this->b << " c=" << this->c << " d=" << this->d << std::endl;
	std::cout << "����: A=" << this->A << " B=" << this->B << " C=" << this->C << " D=" << this->D << std::endl << std::endl;
}

bool Quadrangle::check_fig()
{
	int sum_angiles = this->A + this->B + this->C + this->D;
	if ((this->sides == 4) && (sum_angiles == 360))
	{
		return true;
	}
	return false;
}
