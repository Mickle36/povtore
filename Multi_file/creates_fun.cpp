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
	std::cout << num1 << " в степени " << num2 << " = " << expone << std::endl;
}

void calculate()
{
	double num1;
	double num2;
	int operate;

	std::cout << "Введите первое число: ";
	std::cin >> num1;
	std::cout << "Введите второе число: ";
	std::cin >> num2;

	std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень, \n\
6 - выйти из калькулятора): ";
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
		std::cout << "\nСпасибо, что выбрали наши услуги!!!\n";
		return;
	default:
		break;
	}
}

void start_counter(Counter* your_class)
{
	std::string your_command;
	bool stop_schet = false;

	while (stop_schet==false)
	{
		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
		std::cin >> your_command;

		if (your_command=="+")
		{
			your_class->plus_count();
		}
		else if (your_command=="-")
		{
			your_class->minus_count();
		}
		else if (your_command=="=")
		{
			your_class->get_count();
		}
		else
		{
			stop_schet = your_class->end_schet(your_command);
		}
	}
	std::cout << "До свидания!!!\n";
}
