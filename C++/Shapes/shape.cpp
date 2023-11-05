#include "shape.h"
#include <cmath>

Square::Square() {
    length = 1;
}
Square::Square(float l) {
    length = l;
}
float Square::getArea() {
    return length * length;
}
float Square::getPerimeter() {
    return length * 4;
}
Rectangle::Rectangle() {
    length = 2;
    width = 1;
}
Rectangle::Rectangle(float l, float w) {
    length = l;
    width = w;
}
float Rectangle::getArea() {
    return length * width;
}
float Rectangle::getPerimeter() {
    return (length + width) * 2;
}
Parallelogram::Parallelogram() {
    length = 2;
    width = 2;
    height = 1;
}
Parallelogram::Parallelogram(float l, float w, float h) {
    length = l;
    width = w;
    height = h;
}
float Parallelogram::getArea() {
    return length * height;
}
float Parallelogram::getPerimeter() {
    return (length + width) * 2;
}
Triangle::Triangle() {
    width = 1;
    height = 1;
}
Triangle::Triangle(float w, float h) {
    width = w;
    height = h;
}
float Triangle::getArea() {
    return (width * height) / 2;
}
Circle::Circle() {
    radius = 1;
}
Circle::Circle(float r) {
    radius = r;
}
float Circle::getArea() {
    return M_PI * (radius * radius);
}
float Circle::getCircumference() {
    return M_PI * (radius * 2);
}
Ellipse::Ellipse() {
    radius = 1;
    radius2 = 2;
}
Ellipse::Ellipse(float r1, float r2) {
    radius = r1;
    radius2 = r2;
}
float Ellipse::getArea() {
    return M_PI * (radius * radius2);
}