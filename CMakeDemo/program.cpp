#include "program.hpp"

void my_first_program()
{
	std::string first_name;
	std::cout << "Введите имя: ";
	std::cin >> first_name;
	std::cout << "Здравствуйте, " << first_name << "!\n";
	std::system("pause");
}