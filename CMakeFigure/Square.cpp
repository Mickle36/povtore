#include "Square.hpp"

bool Square::check_fig()
{
    bool check_sides = (this->a == this->b) && (this->c == this->d) && (this->a == this->d);
    bool check_angles = (this->A == this->C) && (this->B == this->D) && (this->A == this->D) && this->D == 90;
    if (check_sides && check_angles && Quadrangle::check_fig())
    {
        return true;
    }
    return false;
}
