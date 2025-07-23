#  Write a Python Program to Accept and Display employee details such as No, Name, Salary using Classes

class Employee:
    def accept(self):
        self.no = int(input("Enter your no :- "))
        self.name = input("Enter your name :- ")
        self.salary = int(input("Enter your salary :- "))
    def disp(self):
        print("\n*****Employee Details*****\n")
        print(f"No :- {self.no}\nName :- {self.name}\nSalary :- {self.salary}")

e = Employee()

e.accept()
e.disp()