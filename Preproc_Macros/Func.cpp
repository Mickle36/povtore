#include "Func.hpp"

void add()
{
	int num1 = 0;
	int num2 = 0;

	std::cout << "Введите число 1: ";
	std::cin >> num1;
	std::cout << "Введите число 2: ";
	std::cin >> num2;
	std::cout << "Результат сложения: " << num1 + num2;
}

void start_game()
{
#if MODE == 0
	std::cout << "Работаю в режиме тренировки\n";
#elif MODE == 1
	std::cout << "Работаю в боевом режиме\n";
	add();
#else
	std::cout << "Неизвестный режим. Завершение работы\n";
#endif
}

