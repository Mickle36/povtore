#pragma once
#include <iostream>
#include <string>

class Figure
{
protected:
	int sides = 0;
	std::string name_figure = "������� ������";
public:
	int get_sides();
	std::string get_name_figure();
	virtual void about_me();
};