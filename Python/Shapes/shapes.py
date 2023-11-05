class Shape:
    def __init__(self):
        pass

class Square(Shape):
    def __init__(self, length):
        super().__init__()
        self.area = length ** 2
        self.perimeter = length * 4
class Rectangle(Square):
    def __init__(self, length, width):
        super().__init__(length)
        self.area = length * width
        self.perimeter = length * 2 + width * 2
class Parallelogram(Rectangle):
    def __init__(self, length, width, height):
        super().__init__(length, width)
        self.area = length * height
        self.perimeter = length * 2 + width * 2

class Circle(Shape):
    def __init__(self, radius):
        super().__init__()
        self.area = radius * radius * 3.14159265
        self.circumference = radius * 2 * 3.14159265
class Ellipse(Circle):
    def __init__(self, radius1, radius2):
        super().__init__(radius1)
        self.area = radius1 * radius2 * 3.14159265

class Ngon(Shape):
    def __init__(self, length, width, sides):
        super().__init__()
        self.sides = sides

x = Ellipse(4, 5)
print(x.area)