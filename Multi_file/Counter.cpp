#include "Counter.h"

void Counter::get_count()
{
	std::cout << this->count << std::endl;
}

void Counter::plus_count()
{
	this->count++;
}

void Counter::minus_count()
{
	this->count--;
}

bool Counter::end_schet(std::string comand)
{
	if ((comand == "x") or (comand == "õ"))
	{
		return true;
	}
	return false;
}
