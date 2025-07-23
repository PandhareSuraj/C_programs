# Python Program to Create a Class in which One Method Accepts a String from the User and Another method Prints it.

class Names:
    def getstr(self):
        self.str = input("Enter your name : ")
    def disp(self):
        print(f"{self.str}")

n = Names()

n.getstr()
n.disp()