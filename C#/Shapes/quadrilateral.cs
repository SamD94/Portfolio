using System;

namespace Shapes;
class Square : Shape {
    protected double length;
    public override double getArea() {
        return Math.Pow(length, 2);
    }
    public virtual double getPerimeter() {
        return length * 4;
    }
    public Square() {
        length = 1;
    }
    public Square(double l) {
        length = l;
    }
}
class Rectangle : Square {
    protected double width;
    public override double getArea() {
        return length * width;
    }
    public override double getPerimeter() {
        return length * 2 + width * 2;
    }
    public Rectangle() {
        length = 1;
        width = 2;
    }
    public Rectangle(double l, double w) {
        length = l;
        width = w;
    }
}
internal class Parallelogram : Rectangle {
    double height;
    public override double getArea() {
        return length * height;
    }
    public Parallelogram() {
        length = 2;
        width = 1;
        height = 1;
    }
    public Parallelogram(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
    }
}