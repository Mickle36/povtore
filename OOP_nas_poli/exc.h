#pragma once
#include <iostream>
#include <string>

class bad_triangele : public std::exception
{
protected:
    std::string str;
public:
    bad_triangele(const std::string& str);
    const char* what() const override;
};

//class bad_rig_trian : public std::exception
//{
//public:
//    const char* what() const override;
//};