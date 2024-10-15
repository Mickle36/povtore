#include "exc.h"

bad_figure::bad_figure(const std::string& message): message(message) {}

const char* bad_figure::what() const
{
    return message.c_str();
}
