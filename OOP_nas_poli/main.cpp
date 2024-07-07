#include <iostream>
#include "Figure.hpp"
#include "Triangle.hpp"
#include "Quadrangle.hpp"

int main()
{
	setlocale(LC_ALL, "ru");
	Figure simple_fig;
	Triangle triang;
	Quadrangle quadr;
	
	std::cout << "Количество сторон: \n";
	simple_fig.about_me();
	triang.about_me();
	quadr.about_me();
	return 0;
}