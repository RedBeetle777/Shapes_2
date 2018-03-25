#pragma once

#include "Shape.hpp"

class Circle : public Shape
{
public:
    
    Circle(double r);
    Circle(double r, Color);
    Circle(const Circle & other) = default;

    double getArea() const noexcept override;
    double getPerimeter() const override;
    double getRadius() const;
    void print() const override;

private:
    Circle() = delete; // doesn't allow to call default constructor

    double r_;
};
