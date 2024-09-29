#include "exc.h"

const char* bad_length::what() const
{
    return "Вы ввели слово запретной длины! До свидания";
}

const char* not_number::what() const
{
    return "Нужно вводить число!";
}
