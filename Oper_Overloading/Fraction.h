#pragma once
#include <iostream>
#include <ostream>

class Fraction
{
protected:
	int numerator_;
	int denominator_;
	int num1;
	int num2;
	Fraction* side;
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

};
