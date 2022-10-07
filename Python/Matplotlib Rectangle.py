
import matplotlib.pyplot as mat
%matplotlib inline

class Rectangle(object):
    def __init__(self,w,l,c):
        self.width=w
        self.height=l
        self.color=c 

    def show(self):
        rect1=mat.Rectangle((0,0),self.width,self.height,color=self.color)
        mat.gca().add_patch(rect1)
        mat.axis('scaled')
        mat.show()

