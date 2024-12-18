#include "Fraction.h"

Fraction::Fraction(int numerator, int denominator)
{
	numerator_ = numerator;
	denominator_ = denominator;

	if (this->denominator_ == 0)
	{
		throw std::invalid_argument("� ����� �� ������ ���� �����!!!");
	}
}

void Fraction::transformation(Fraction other)
{
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

Fraction Fraction::operator+(Fraction& other)
{
	this->general_numer = this->numerator_ * other.denominator_ + other.numerator_ * this->denominator_;
	this->general_denom = this->denominator_ * other.denominator_;

	return {this->general_numer, this->general_denom} ;
}

Fraction Fraction::operator-(Fraction& other)
{
	this->general_numer = this->numerator_ * other.denominator_ - other.numerator_ * this->denominator_;
	this->general_denom = this->denominator_ * other.denominator_;

	return { this->general_numer, this->general_denom };
}

Fraction Fraction::operator*(Fraction& other)
{
	if (this->numerator_ == other.denominator_) //��������� ������ ����� ����� ����������� ������
	{
		this->general_numer = other.numerator_;
		this->general_denom = this->denominator_;
	}
	else if (other.numerator_ == this->denominator_) //��������� ������ ����� ����� ����������� ������
	{
		this->general_numer = this->numerator_;
		this->general_denom = other.denominator_;
	}
	else if ((this->numerator_ % other.denominator_) == 0) //��������� ������ ����� ������� �� ����������� ������ ��� �������
	{
		this->general_numer = (this->numerator_ / other.denominator_) * other.numerator_;
		this->general_denom = this->denominator_;
	}
	else if ((other.numerator_ % this->denominator_) == 0) //��������� ������ ����� ������� �� ����������� ������ ��� �������
	{
		this->general_numer = (other.numerator_ / this->denominator_) * this->numerator_;
		this->general_denom = other.denominator_;
	}
	else if ((other.denominator_ % this->numerator_) == 0) //����������� ������ ����� ������� �� ��������� ������ ��� �������
	{
		this->general_numer = other.numerator_;
		this->general_denom = (other.denominator_ / this->numerator_) * this->denominator_;
	}
	else if ((this->denominator_ % other.numerator_) == 0) //����������� ������ ����� ������� �� ��������� ������ ��� �������
	{
		this->general_numer = this->numerator_;
		this->general_denom = (this->denominator_ / other.numerator_) * other.denominator_;
	}
	else // ������ � ������� ��� ����������
	{
		this->general_numer = this->numerator_ * other.numerator_;
		this->general_denom = this->denominator_ * other.denominator_;
	}

	return { this->general_numer, this->general_denom };
}

Fraction Fraction::operator/(Fraction& other) //�� ��������, ��� ��� ������� ������, ������ ����� ����������������
//������� ��������� ����� �� ��� ��� ������������, �� ����� ������ ������ ���������� �����
{
	if (this->numerator_ == other.numerator_) //��������� ������ ����� ����� ����������� ������
	{
		this->general_numer = other.denominator_;
		this->general_denom = this->denominator_;
	}
	else if (other.denominator_ == this->denominator_) //��������� ������ ����� ����� ����������� ������
	{
		this->general_numer = this->numerator_;
		this->general_denom = other.numerator_;
	}
	else if ((this->numerator_ % other.numerator_) == 0) //��������� ������ ����� ������� �� ����������� ������ ��� �������
	{
		this->general_numer = (this->numerator_ / other.numerator_) * other.denominator_;
		this->general_denom = this->denominator_;
	}
	else if ((other.numerator_ % this->numerator_) == 0) //��������� ������ ����� ������� �� ����������� ������ ��� �������
	{
		this->general_numer = other.denominator_;
		this->general_denom = (other.numerator_ / this->numerator_) * this->denominator_;
	}
	else if ((other.denominator_ % this->denominator_) == 0) //����������� ������ ����� ������� �� ��������� ������ ��� �������
	{
		this->general_numer = (other.denominator_ / this->denominator_) * this->numerator_;
		this->general_denom = other.numerator_;
	}
	else if ((this->denominator_ % other.denominator_) == 0) //����������� ������ ����� ������� �� ��������� ������ ��� �������
	{
		this->general_numer = this->numerator_;
		this->general_denom = (this->denominator_ / other.denominator_) * other.numerator_;
	}
	else // ������ � ������� ��� ����������
	{
		this->general_numer = this->numerator_ * other.denominator_;
		this->general_denom = this->denominator_ * other.numerator_;
	}

	return { this->general_numer, this->general_denom };
}

int Fraction::GetNumerator()
{
	return this->numerator_;
}

int Fraction::GetDenominator()
{
	return this->denominator_;
}

void Print(Fraction f1, Fraction f2)
{
	Fraction f3 = f1 + f2;
	std::cout << f1 << " + " << f2 <<  " = " << f3 << std::endl;
	f3 = f1 - f2;
	std::cout << f1 << " - " << f2 << " = " << f3 << std::endl;
	f3 = f1 * f2;
	std::cout << f1 << " * " << f2 << " = " << f3 << std::endl;
	f3 = f1 / f2;
	std::cout << f1 << " / " << f2 << " = " << f3 << std::endl;
}

std::ostream& operator<<(std::ostream& stream, Fraction& other)
{
	if (other.GetNumerator() == other.GetDenominator())
	{
		return stream << 1;
	}
	return stream << other.GetNumerator() << "/" << other.GetDenominator();
}
