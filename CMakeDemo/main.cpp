#include <iostream>
#include <Windows.h>

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	std::string first_name;
	std::cout << "������� ���: ";
	std::cin >> first_name;
	std::cout << "������������, " << first_name << "!";

	return 0;
}