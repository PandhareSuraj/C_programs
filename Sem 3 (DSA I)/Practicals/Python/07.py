#  Define a class named Country which has a method called printNationality . Define a subclass named State from Country which has a method called printState . Write a method to print the state, country, and nationality

class Country:
    def __init__(self):
        self.nationality = ""
        self.country_name = ""

    def printNationality(self):
        self.country_name = input("Enter the Country: ")
        self.nationality = input("Enter the Nationality: ")

class State(Country):
    def __init__(self):
        super().__init__()
        self.state = ""

    def printState(self):
        self.state = input("Enter the State: ")

    def detailPrint(self):
        print("\n*****Details*****")
        print(f"\nCountry: {self.country_name}")
        print(f"Nationality: {self.nationality}")
        print(f"State: {self.state}")

s1 = State()

s1.printNationality()
s1.printState()

s1.detailPrint()
