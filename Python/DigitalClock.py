# importing whole module
from tkinter import *
from tkinter.ttk import *

# importing strftime function to system time 

from time import strftime

# creating tkinter window
root = Tk()
root.title('Clock')

# This function is used to display time on the label
def time():
	string = strftime("%H : %M : %S")
	lbl.config(text = string)
	lbl.after(100, time)

# Styling the label widget so that clock will look more attractive
lbl = Label(root, font = ('calibri', 40, 'bold'))

# Placing clock at the centre of the tkinter window
lbl.pack(anchor = 'center')
time()
mainloop()