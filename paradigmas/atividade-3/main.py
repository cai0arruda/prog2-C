# main.py
from formas import Rectangle, Square

def get_total_area(shapes):
    return sum(shape.calculate_area() for shape in shapes)

get_total_area([Rectangle(10, 5), Square(5)])
