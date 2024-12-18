#pragma once
#include <iostream>
#include <string>

class Figure
{
protected:
	int sides = 0;
	std::string name_figure = "Простая фигура";
public:
	Figure() {};
	int get_sides();
	std::string get_name_figure();
	virtual void about_me();
	virtual bool check_fig();
};