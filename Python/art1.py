import turtle 
k = turtle.Turtle()
k.speed(0)
k.color("blue")
k.left(24)
for i in range(200):
    if i%2 == 0:
        k.color('red')
    else:
        k.color('blue')
    k.fd(1+i*3)
    k.lt(91)

turtle.done()
