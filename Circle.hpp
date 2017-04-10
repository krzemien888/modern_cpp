#pragma once

#include "Shape.hpp"

class Circle final : public Shape
{
public:
    Circle(double r);
    Circle(const Circle & other) = default;

    virtual double getArea() const override;
    virtual double getPerimeter() const override;
    virtual double getRadius() const final;
    virtual void print() const override;

    [[deprecated("Not really true")]]
    double getPI() const;

private:
    Circle() = delete; // doesn't allow to call default constructor

    double r_;
};
