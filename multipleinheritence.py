class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age
    def get_details(self):
        return f"Name: {self.name}, Age: {self.age}"
class Learner:
    def __init__(self, course):
        self.course = course
    def get_course(self):
        return f"Course: {self.course}"
class Student(Person, Learner):
    def __init__(self, name, age, course, student_id):
        Person.__init__(self, name, age)
        Learner.__init__(self, course)
        self.student_id = student_id
    def get_student_details(self):
        person_details = self.get_details()
        course_details = self.get_course()
        return f"{person_details}, {course_details}, Student ID: {self.student_id}"
student = Student("Alice", 20, "Computer Science", "S12345")
print(student.get_student_details())