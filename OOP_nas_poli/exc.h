#pragma once
#include <iostream>
#include <string>

class bad_figure : public std::exception
{
protected:
    std::string message;
public:
    bad_figure(const std::string& message);
    const char* what() const override;
};

//class bad_rig_trian : public std::exception
//{
//public:
//    const char* what() const override;
//};