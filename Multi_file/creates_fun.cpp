#include "creates_fun.hpp"

void sum(double num1, double num2)
{
	std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
}

void subtrac(double num1, double num2)
{
	std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
}

void multi(double num1, double num2)
{
	std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
}

void divi(double num1, double num2)
{
	std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
}

void expon(double num1, double num2)
{
	int expone = 1;
	for (int i = 0; i < num2; i++)
	{
		expone *= num1;
	}
	std::cout << num1 << " � ������� " << num2 << " = " << expone << std::endl;
}

void calculate()
{
	double num1;
	double num2;
	int operate;

	std::cout << "������� ������ �����: ";
	std::cin >> num1;
	std::cout << "������� ������ �����: ";
	std::cin >> num2;

	std::cout << "�������� �������� (1 - ��������, 2 ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������, \n\
6 - ����� �� ������������): ";
	std::cin >> operate;

	switch (operate)
	{
	case 1:
	{
		sum(num1, num2);
		calculate();
		break;
	}
	case 2:
	{
		subtrac(num1, num2);
		calculate();
		break;
	}
	case 3:
	{
		multi(num1, num2);
		calculate();
		break;
	}
	case 4:
	{
		divi(num1, num2);
		calculate();
		break;
	}
	case 5:
	{
		expon(num1, num2);
		calculate();
		break;
	}
	case 6:
		std::cout << "\n�������, ��� ������� ���� ������!!!\n";
		return;
	default:
		break;
	}
}
