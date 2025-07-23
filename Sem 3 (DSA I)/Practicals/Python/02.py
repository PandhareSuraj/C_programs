# Python Program to Create a Class which Performs Basic Calculator Operations

class Operations:
    a = 51
    b = 20
    def add(self):
        print("Addition of two numbers :- ",self.a+self.b)
    def sub(self):
        print("Substraction of two numbers :- ",self.a-self.b)
    def mult(self):
        print("Muliplication of two numbers :- ",self.a*self.b)
    def div(self):
        print("Division of two numbers :- ",self.a/self.b)
    def modulus(self):
        print("Modulus of two numbers :- ",self.a%self.b)
    
o = Operations()
o.add()
o.sub()
o.mult()
o.div()
o.modulus()