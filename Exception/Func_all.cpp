#include "Func_all.h"

int function(std::string str, int forbidden_length)
{
	if (forbidden_length == str.length()) throw bad_length();
    return str.length();
}

void mini_game()
{
    std::string str;
    int forbidden_length = 0;
	try
	{
		std::cout << "������� ��������� �����: ";
		std::cin >> forbidden_length;
		if (forbidden_length == 0) throw not_number();
		
		while (true)
		{
			std::cout << "������� �����:";
			std::cin >> str;
			std::cout << "����� ����� \"" << str << "\" ����� " << function(str, forbidden_length) << std::endl;
		}
	}
	catch (const not_number& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	catch (const bad_length& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	catch (...) { std::cout << "����������� ������" << std::endl; }
}
