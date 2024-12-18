#include "Rhomb.hpp"

bool Rhomb::check_fig()
{
    bool check_sides = (this->a == this->b) && (this->c == this->d) && (this->a == this->d);
    bool check_angles = (this->A == this->C) && (this->B == this->D);

    if (check_sides && check_angles && Quadrangle::check_fig())
    {
        return true;
    }
    return false;
}
