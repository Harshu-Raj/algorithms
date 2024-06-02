class student:
    def __init__(self):
        self.name='Himanshu'
        self.age=20
        self.marks=720
    def talk(self):
        print('Hi,I am',self.name)
        print('My age is',self.age)
        print('My marks are',self.marks)
s1=student()
s1.talk()