class Myclass:
    n=0
    def __init__(self):
        Myclass.n=Myclass.n+1
    @staticmethod
    def noObjects():
        print('No of instances created:',Myclass.n)

obj1=Myclass()
obj2=Myclass()
obj3=Myclass()
Myclass.noObjects()