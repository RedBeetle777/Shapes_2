#pragma once

#include "Shape.hpp"

class Rectangle : public Shape
{
public:
    Rectangle(double x, double y);
    Rectangle(const Rectangle & other) = default;

    double getArea() const noexcept;
    double getPerimeter() const;
    virtual double getX() const final;
    double getY() const;
    void print() const;

private:
    Rectangle() = delete;

    double x_;
    double y_;
};
