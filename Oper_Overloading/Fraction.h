#pragma once
#include <iostream>
#include <ostream>

class Fraction
{
protected:
	int numerator_;
	int general_numer;
	int denominator_;
	int general_denom;
	int num1;
	int num2;
public:
	Fraction(int numerator, int denominator);
	
	void transformation(Fraction other);
	bool operator==(Fraction other);
	bool operator!=(Fraction other);
	bool operator>(Fraction other);
	bool operator<(Fraction other);
	bool operator<=(Fraction other);
	bool operator>=(Fraction other);
	void Print(Fraction other);

	Fraction operator+(Fraction& other);
	Fraction operator-(Fraction& other);
	Fraction operator*(Fraction& other);
	Fraction operator/(Fraction& other);

	friend void Print(Fraction f1, Fraction f2);
	int GetNumerator();
	int GetDenominator();
};

void Print(Fraction f1, Fraction f2);

std::ostream& operator<<(std::ostream& stream, Fraction& other);
