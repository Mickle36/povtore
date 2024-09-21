#include "Func.hpp"

int main()
{
	setlocale(LC_ALL, "ru");
	
	//start_game();

	int a = 6;
	int b = 5;
	int c = 2;

	std::cout << SUB(a, b) << std::endl;
	std::cout << SUB(a, b) * c << std::endl;
	std::cout << SUB(a, b + c) * c << std::endl;
}