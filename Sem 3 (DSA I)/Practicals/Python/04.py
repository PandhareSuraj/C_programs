# Write a Python Program to Accept and Display students details such as Roll.No, Name, Marks in three subjects, using Classes.

class Student:
    marks = []
    
    def accept(self):
        self.rollno = int(input("Enter your roll number: ")) 
        self.name = input("Enter your name: ")
        for i in range(3):
            mark = int(input(f"Enter marks of subject {i + 1}: "))  
            self.marks.append(mark) 
            
    def disp(self):
        print("\n*****Student Details*****\n")
        print(f"Roll No: {self.rollno}\nName: {self.name}")
        for i in range(3):
            print(f"Marks of subject {i + 1}: {self.marks[i]}")

s = Student()
s.accept()
s.disp()
