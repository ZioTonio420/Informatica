import turtle
n=int(input('quanti scalini vuoi che faccia la freccia?'))
t = turtle.Pen()
for i in range(0,n):
   t.left(90)
   t.forward(50)
   t.right(90)
   t.forward(50)


