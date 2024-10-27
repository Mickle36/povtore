#include <iostream>
#include "Fraction.h"
#include "Windows.h"

int main()
{
	setlocale(LC_ALL, "ru");
	try
	{
		Fraction f1(4, 3);
		Fraction f2(8, 7);
		f1.Print(f2);
		/*std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
		std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
		std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
		std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
		std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
		std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';*/
	}
	catch (const std::exception& ex)
	{
		std::cout << "Îøèáêà: " << ex.what() << std::endl;
	}
	return 0;
}