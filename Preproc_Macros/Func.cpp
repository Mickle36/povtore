#include "Func.hpp"

void add()
{
	int num1 = 0;
	int num2 = 0;

	std::cout << "������� ����� 1: ";
	std::cin >> num1;
	std::cout << "������� ����� 2: ";
	std::cin >> num2;
	std::cout << "��������� ��������: " << num1 + num2;
}

void start_game()
{
#if MODE == 0
	std::cout << "������� � ������ ����������\n";
#elif MODE == 1
	std::cout << "������� � ������ ������\n";
	add();
#else
	std::cout << "����������� �����. ���������� ������\n";
#endif
}

