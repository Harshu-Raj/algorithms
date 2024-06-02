class Vehicle:
    def __init__(self, make, model):
        self.make = make
        self.model = model
    def start(self):
        return f"The {self.make} {self.model} is starting."
class Car(Vehicle):
    def __init__(self, make, model, fuel_type):
        super().__init__(make, model)
        self.fuel_type = fuel_type
    def refuel(self):
        return f"The {self.make} {self.model} is refueling with {self.fuel_type}."
class ElectricCar(Car):
    def __init__(self, make, model, battery_capacity):
        super().__init__(make, model, "electricity")
        self.battery_capacity = battery_capacity
    def charge(self):
        return f"The {self.make} {self.model} is charging. Battery capacity:{self.battery_capacity} kWh."
tesla = ElectricCar("Tesla", "Model S", 100)

print(tesla.start()) 
print(tesla.refuel()) 
print(tesla.charge())