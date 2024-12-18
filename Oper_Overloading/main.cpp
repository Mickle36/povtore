#include <iostream>
#include "Fraction.h"
#include "Windows.h"

int main()
{
	int num1, den1;
	int num2, den2;
	setlocale(LC_ALL, "ru");
	try
	{
		std::cout << "¬ведите числитель дроби 1: ";
		std::cin >> num1;
		std::cout << "¬ведите знаменатель дроби 1: ";
		std::cin >> den1;
		std::cout << "¬ведите числитель дроби 2: ";
		std::cin >> num2;
		std::cout << "¬ведите знаменатель дроби 2: ";
		std::cin >> den2;

		Fraction f1(num1, den1);
		Fraction f2(num2, den2);

		Print(f1, f2);


		//f1.Print(f2);
		/*std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
		std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
		std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
		std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
		std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
		std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';*/
	}
	catch (const std::exception& ex)
	{
		std::cout << "ќшибка: " << ex.what() << std::endl;
	}

	return 0;
}