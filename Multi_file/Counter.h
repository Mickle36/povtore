#pragma once
#include <iostream>
#include <string>

class Counter
{
protected:
	int count;
	std::string start_value;
public:
	Counter()
	{
		loop:
		std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: ";
		std::cin >> this->start_value;

		if (this->start_value=="��")
		{
			std::cout << "������� ��������� �������� ��������: ";
			std::cin >> this->count;
		}
		else if(this->start_value == "���")
		{
			this->count = 1;
		}
		else
		{
			goto loop;
		}
	}

	void get_count();

	void plus_count();

	void minus_count();

	bool end_schet(std::string comand);
	
};

