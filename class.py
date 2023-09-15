# class 

class pen:
    def __init__(self,color):
        self.color = color
    
    def set_color(self,color):
        self.color = color

    def get_color(self):
        return self.color
    
myPen = pen("black")

myPen.set_color("blue")

print(f"my pen color is {myPen.get_color()} ")