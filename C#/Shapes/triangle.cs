using System;

namespace Shapes;
internal class Triangle : Shape {
    double width;
    double height;
    public override double getArea() {
        return width * height / 2;
    }
    public Triangle() {
        width = 1;
        height = 1;
    }
    public Triangle(double w, double h) {
        width = w;
        height = h;
    }
}