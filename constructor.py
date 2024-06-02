class student:
    def __init__(self,n='',m=0):
        self.name=n
        self.marks=m
    def display(self):
        print('Hi',self.name)
        print('Your marks',self.marks)
s=student()
s.display()
print('------------------')
s1=student('Himanshu Kumar',720)
s1.display()
print('------------------')      