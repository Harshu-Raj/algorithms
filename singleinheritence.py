class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age
    def display(self):
        print(f"Name: {self.name}, Age: {self.age}")
class Student(Person):
    def __init__(self, name, age, student_id):
        super().__init__(name, age)
        self.student_id = student_id
    def display(self):
        super().display()
        print(f"Student ID: {self.student_id}")
student = Student("Alice", 20, "S12345")
student.display()