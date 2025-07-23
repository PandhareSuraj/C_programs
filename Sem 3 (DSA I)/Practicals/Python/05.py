# Define a class named Rectangle which can be constructed by a length and width. The Rectangle class has a method which can compute the area and volume.

class Rectangle:
    def __init__(self, length, width, height):
        self.length = length
        self.width = width
        self.height = height 

    def area(self):
        return self.length * self.width

    def volume(self):
        return self.length * self.width * self.height


r = Rectangle(10, 20, 30) 
print(f"Area of rectangle: {r.area()}")  
print(f"Volume of rectangle: {r.volume()}") 
