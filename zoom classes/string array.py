class Vehicle:
    def __init__(self, name, max_speed, mileage):
        self.name = name
        self.max_speed = max_speed
        self.mileage = mileage
        print(f"Bus name: {self.name}\nBus Speed: {self.max_speed}\nBus Mileage: {self.mileage}")
    def seating_capacity(self,capacity):
       print(f"The seating capacity of a {self.name} is {capacity} passengers")
class Bus(Vehicle):
    def __init__(self,a,b,c):
        print("Constructer of Vehicle")
        super().__init__("Eicher Bus",120,80)
    
    

s=Bus("Eicher Bus",120,80)
s.seating_capacity(50)
