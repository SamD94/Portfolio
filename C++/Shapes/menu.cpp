#include <iostream>
#include "menu.h"
#include "shape.h"
using namespace std;

/*
Notes:
Unique pointers are an excellent alternative to 
*/

char option() {
    char o;
    cout << "0. Quit\n" <<
            "1. Circle\n" <<
            "2. Ellipse\n" <<
            "3. Square\n" <<
            "4. Rectangle\n" <<
            "5. Parallelogram\n" <<
            "6. Triangle" << endl;
    cout << "Option: ";
    cin >> o;
    cout << endl;
    return o;
}

void display(char &option) {
    switch (option) {
        case '0':
            cout << "Thank you." << endl;
            break;
        case '1':
            cout << "Circle" << endl;
            createCircle();
            break;
        case '2':
            cout << "Ellipse" << endl;
            createEllipse();
            break;
        case '3':
            cout << "Square" << endl;
            createSquare();
            break;
        case '4':
            cout << "Rectangle" << endl;
            createRectangle();
            break;
        case '5':
            cout << "Parallelogram" << endl;
            createParallelogram();
            break;
        case '6':
            cout << "Triangle" << endl;
            createTriangle();
            break;
        default:
            cout << "ERROR: Invalid input" << endl;
    }
}

void createCircle() {
    float rad;
    cout << "Radius: ";
    cin >> rad;
    unique_ptr<Circle> cir(new Circle(rad));
    cout << "Area: " << cir->getArea() << endl;
    cout << "Circumference: " << cir->getCircumference() << endl;
}

void createEllipse() {
    float rad1;
    float rad2;
    cout << "Radius 1: ";
    cin >> rad1;
    cout << "Radius 2: ";
    cin >> rad2;
    unique_ptr<Ellipse> ell(new Ellipse(rad1, rad2));
    cout << "Area: " << ell->getArea() << endl;
}

void createSquare() {
    float length;
    cout << "Length: ";
    cin >> length;
    unique_ptr<Square> squ(new Square(length));
    cout << "Area: " << squ->getArea() << endl;
    cout << "Perimeter: " << squ->getPerimeter() << endl;
}

void createRectangle() {
    float length;
    float width;
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    unique_ptr<Rectangle> rec(new Rectangle(length, width));
    cout << "Area: " << rec->getArea() << endl;
    cout << "Perimeter: " << rec->getPerimeter() << endl;
}

void createParallelogram() {
    float length;
    float width;
    float height;
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;
    unique_ptr<Parallelogram> par(new Parallelogram(length, width, height));
    cout << "Area: " << par->getArea() << endl;
    cout << "Perimeter: " << par->getPerimeter() << endl;
}

void createTriangle() {
    float width;
    float height;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;
    unique_ptr<Triangle> tri(new Triangle(width, height));
    cout << "Area: " << tri->getArea() << endl;
}