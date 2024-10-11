#include "exc.h"

bad_triangele::bad_triangele(const std::string& str): str(str)
{
}

const char* bad_triangele::what() const
{
    return str.c_str();
}

//const char* bad_rig_trian::what() const
//{
//    return "Ошибка создания прямоугольного треугольника. Причина: угол С не равен 90 градусам";
//}
