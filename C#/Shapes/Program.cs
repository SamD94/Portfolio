// See https://aka.ms/new-console-template for more information

using System;
using Shapes;

void createCircle() {
    Console.Write("Radius: ");
    double rad = Convert.ToDouble(Console.ReadLine());
    Circle circle = new Circle(rad);
    Console.WriteLine("Area: " + circle.getArea());
    Console.WriteLine("Circumference: " + circle.getCircumference() + "\n");
}
void createEllipse() {
    Console.Write("Radius 1: ");
    double rad1 = Convert.ToDouble(Console.ReadLine());
    Console.Write("Radius 2: ");
    double rad2 = Convert.ToDouble(Console.ReadLine());
    Ellipse ellipse = new Ellipse(rad1, rad2);
    Console.WriteLine("Area: " + ellipse.getArea() + "\n");
}
void createSquare() {
    Console.Write("Length: ");
    double lng = Convert.ToDouble(Console.ReadLine());
    Square square = new Square(lng);
    Console.WriteLine("Area: " + square.getArea());
    Console.WriteLine("Perimeter: " + square.getPerimeter() + "\n");
}
void createRectangle() {
    Console.Write("Length: ");
    double lng = Convert.ToDouble(Console.ReadLine());
    Console.Write("Width: ");
    double wid = Convert.ToDouble(Console.ReadLine());
    Rectangle rectangle = new Rectangle(lng, wid);
    Console.WriteLine("Area: " + rectangle.getArea());
    Console.WriteLine("Perimeter: " + rectangle.getPerimeter() + "\n");
}
void createParallelogram() {
    Console.Write("Length: ");
    double lng = Convert.ToDouble(Console.ReadLine());
    Console.Write("Width: ");
    double wid = Convert.ToDouble(Console.ReadLine());
    Console.Write("Height: ");
    double hgt = Convert.ToDouble(Console.ReadLine());
    Parallelogram parallelogram = new Parallelogram(lng, wid, hgt);
    Console.WriteLine("Area: " + parallelogram.getArea());
    Console.WriteLine("Perimeter: " + parallelogram.getPerimeter() + "\n");
}
void createTriangle() {
    Console.Write("Width: ");
    double wid = Convert.ToDouble(Console.ReadLine());
    Console.Write("Height: ");
    double hgt = Convert.ToDouble(Console.ReadLine());
    Triangle triangle = new Triangle(wid, hgt);
    Console.WriteLine("Area: " + triangle.getArea() + "\n");
}
string? input;
do {
    Console.WriteLine("0. Quit");
    Console.WriteLine("1. Circle");
    Console.WriteLine("2. Ellipse");
    Console.WriteLine("3. Square");
    Console.WriteLine("4. Rectangle");
    Console.WriteLine("5. Parallelogram");
    Console.WriteLine("6. Triangle");
    Console.Write("Option: ");
    input = Console.ReadLine();
    Console.WriteLine();
    switch (input) {
        case "0":
            Console.WriteLine("Thank you.");
            break;
        case "1":
            Console.WriteLine("Circle");
            createCircle();
            break;
        case "2":
            Console.WriteLine("Ellipse");
            createEllipse();
            break;
        case "3":
            Console.WriteLine("Square");
            createSquare();
            break;
        case "4":
            Console.WriteLine("Rectangle");
            createRectangle();
            break;
        case "5":
            Console.WriteLine("Parallelogram");
            createParallelogram();
            break;
        case "6":
            Console.WriteLine("Triangle");
            createTriangle();
            break;
        default:
            Console.WriteLine("ERROR: Invalid input");
            break;
    }
    Console.WriteLine();
} while (input != "0");
