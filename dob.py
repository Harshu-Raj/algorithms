class Person:
    def __init__(self,name,dd,mm,yy):
        self.name=name
        self.dob=self.Dob(dd,mm,yy)
    def display(self):
        print('Name=',self.name)
    class Dob:
        def __init__(self,dd,mm,yy):
            self.dd=dd
            self.mm=mm
            self.yy=yy
        def display(self):
            print('Dob= {}/{}/{}'.format(self.dd, self.mm, self.yy))
p=Person('Charles',22,5,2002)
p.display()
p1 =Person('Rohan',4,3,2000)
p1.display()
x = p.dob
x.display()
x = p1.dob
x.display()