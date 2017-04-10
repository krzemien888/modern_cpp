#pragma once

enum class Colors
{
    RED,
    BLUE,
    GREEN
};

class Shape
{
public:
    virtual ~Shape() = default;

    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
    virtual void print() const;
protected:
    Colors m_color = Colors::RED;
};
