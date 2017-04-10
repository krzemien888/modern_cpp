#pragma once

#include "Rectangle.hpp"

class Square : public Rectangle
{
public:
    Square(double x);
    Square(const Square & other) = default;

    virtual double getArea() const override;
    virtual double getPerimeter() const override;
    virtual void print() const override;

private:
    double getY() = delete; // should not have Y dimension
    Square() = delete;
};
