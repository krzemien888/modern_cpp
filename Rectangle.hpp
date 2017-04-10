#pragma once

#include "Shape.hpp"

class Rectangle : public Shape
{
public:
    Rectangle(double x, double y);
    Rectangle(const Rectangle & other) = default;

    virtual double getArea() const override;
    virtual double getPerimeter() const override;
    virtual double getX() const final;
    virtual double getY() const final;
    void print() const override;

private:
    Rectangle();

    double x_;
    double y_;
};
