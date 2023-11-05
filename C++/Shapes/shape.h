#ifndef SHAPE_H
#define SHAPE_H

class Shape {
    public:
        virtual float getArea() = 0;
};

class Square : protected Shape {
    protected:
        float length;
    public:
        Square();
        Square(float l);
        float getArea();
        float getPerimeter();
};

class Rectangle : protected Square {
    protected: 
        float width;
    public:
        Rectangle();
        Rectangle(float l, float w);
        float getArea();
        float getPerimeter();
};

class Parallelogram : protected Rectangle {
    protected:
        float height;
    public:
        Parallelogram();
        Parallelogram(float l, float w, float h);
        float getArea();
        float getPerimeter();
};

class Triangle : protected Shape {
    protected:
        float width;
        float height;
    public:
        Triangle();
        Triangle(float w, float h);
        float getArea();
};

class Circle : protected Shape {
    protected:
        float radius;
    public:
        Circle();
        Circle(float r);
        float getArea();
        float getCircumference();
};

class Ellipse : protected Circle {
    protected:
        float radius2;
    public:
        Ellipse();
        Ellipse(float r1, float r2);
        float getArea();
};

#endif