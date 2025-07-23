#  Define a class named Shape and its subclass Square/Circle). The subclass has an init function which takes an argument (length/radius). Both classes have area and volume functions, where Shapeʼs area is 0 by default.

import math
class Shape:
    def __init__(self):
        pass
    def area(self):
        return 0
    def volume(self):
        return 0
    
class Circle(Shape):
    def __init__(self,r):
        self.r = r
        
    def area(self):
        print(f"area={math.pi*(self.r**2)}")
        
    def volume(self):
        print(f"Volume={(4/3*math.pi*(self.r**3))}")
        
        
class square(Shape):
    def __init__(self,l):
        self.l = l   
        
    def area(self):
        print("area=",self.l**2)
        
    def volume(self):
        print("Volume=",self.l**3)
        
        
        
s = square(2)
s.area()
s.volume()
c = Circle(2)
c.area()
c.volume()