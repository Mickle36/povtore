#include "Fraction.h"

Fraction::Fraction(int numerator, int denominator)
{
	numerator_ = numerator;
	denominator_ = denominator;

	if ((this->numerator_ == 0) || (this->denominator_ == 0))
	{
		throw std::invalid_argument("В дроби не должно быть нолей!!!");
	}
}

void Fraction::transformation(Fraction other)
{
	this->side = &other;
	this->num1 = this->numerator_ * other.denominator_;
	this->num2 = this->denominator_ * other.numerator_;

}

bool Fraction::operator==(Fraction other)
{
	this->transformation(other);

	return bool(num1 == num2);
}

bool Fraction::operator!=(Fraction other)
{

	return !(*this == other);
}

bool Fraction::operator>(Fraction other)
{
	this->transformation(other);

	return bool(num1 > num2);
}

bool Fraction::operator<(Fraction other)
{
	return bool(!(*this > other));
}

bool Fraction::operator<=(Fraction other)
{
	return bool(!(*this > other));
}

bool Fraction::operator>=(Fraction other)
{
	return bool(!(*this < other));
}

void Fraction::Print(Fraction other)
{
	std::cout << "f1" << ((*this == other) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((*this != other) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((*this > other) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((*this < other) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((*this <= other) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((*this >= other) ? " >= " : " not >= ") << "f2" << '\n';
}
