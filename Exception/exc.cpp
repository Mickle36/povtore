#include "exc.h"

const char* bad_length::what() const
{
    return "�� ����� ����� ��������� �����! �� ��������";
}

const char* not_number::what() const
{
    return "����� ������� �����!";
}
