using System;

namespace Shapes;
internal class Circle : Shape {
    protected double radius;
    public virtual double getCircumference() {
        return Math.Round(2 * radius * Math.PI, 2);
    }
    public override double getArea() {
        return Math.Round(Math.Pow(radius, 2) * Math.PI, 2);
    }
    public Circle() {
        radius = 1;
    }
    public Circle(double r) {
        radius = r;
    }
}
class Ellipse : Circle {
    double radius2;
    public override double getArea() {
        return Math.Round(radius * radius2 * Math.PI, 2);
    }
    public Ellipse() {
        radius = 1;
        radius2 = 2;
    }
    public Ellipse(double r1, double r2) {
        radius = r1;
        radius2 = r2;
    }
}