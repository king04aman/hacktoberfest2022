from tkinter import *
import math

import tkinter.messagebox

root = Tk()
root.title("Calculator")
root.configure(background="gray60")
root.resizable(width=False, height=False)
root.geometry("480x568+0+0")

calc = Frame(root)
calc.grid()

class Calc:
    def __init__(self):
        self.total = 0
        self.current = ''
        self.ip_val = True
        self.check_sum = False
        self.op = ''
        self.result = False

    def numberEnter(self, num):
        self.result = False
        first_num = txtDisplay.get()
        second_num = str(num)

        if self.ip_val:
            self.current = second_num
            self.ip_val = False
        else:
            if second_num == '.':
                if second_num in first_num:
                    return
            self.current = first_num + second_num
        self.display(self.current)

    def sum_of_total(self):
        self.result = True
        self.current = float(self.current)
        if self.check_sum:
            self.valid_function()
        else:
            self.total = float(txtDisplay.get())

    def valid_function(self):
        if self.op == 'add':
            self.total += self.current
        elif self.op == 'sub':
            self.total -= self.current
        elif self.op == 'mul':
            self.total *= self.current
        elif self.op == 'div':
            self.total /= self.current
        elif self.op == 'mod':
            self.total %= self.current

        self.ip_val = True
        self.check_sum = False
        self.display(self.total)

    def operation(self, op):
        self.current = float(self.current)
        if self.check_sum:
            self.valid_function()
        elif not self.result:
            self.total = self.current
            self.ip_val = True
        self.check_sum = True
        self.op = op
        self.result = False

    # ------Manipulation of display

    def display(self, value):
        txtDisplay.delete(0, END)
        txtDisplay.insert(0, value)

    def clear_entry(self):
        self.result = False
        self.current = '0'
        self.display(0)
        self.ip_val = True

    def clear_all(self):
        self.clear_entry()
        self.total = 0

    # --------Functions for standard constants

    def pi(self):
        self.result = False
        self.current = math.pi
        self.display(self.current)

    def e(self):
        self.result = False
        self.current = math.e
        self.display(self.current)

    # --------Functions for calculation

    def PM(self):
        self.result = False
        self.current = -(float(txtDisplay.get()))
        self.display(self.current)

    def sq_rt(self):
        self.result = False
        self.current = math.sqrt(float(txtDisplay.get()))
        self.display(self.current)

    def ln(self):
        self.result = False
        self.current = math.log(float(txtDisplay.get()))
        self.display(self.current)

    def log(self):
        self.result = False
        self.current = math.log10(float(txtDisplay.get()))
        self.display(self.current)

    def log2(self):
        self.result = False
        self.current = math.log2(float(txtDisplay.get()))
        self.display(self.current)

    def exp(self):
        self.result = False
        self.current = math.exp(math.radians(float(txtDisplay.get())))
        self.display(self.current)

    def sin(self):
        self.result = False
        self.current = math.sin(math.radians(float(txtDisplay.get())))
        self.display(self.current)

    def cos(self):
        self.result = False
        self.current = math.cos(math.radians(float(txtDisplay.get())))
        self.display(self.current)

    def tan(self):
        self.result = False
        self.current = math.tan(math.radians(float(txtDisplay.get())))
        self.display(self.current)

    def sinh(self):
        self.result = False
        self.current = math.sinh(math.radians(float(txtDisplay.get())))
        self.display(self.current)

    def cosh(self):
        self.result = False
        self.current = math.cosh(math.radians(float(txtDisplay.get())))
        self.display(self.current)

    def tanh(self):
        self.result = False
        self.current = math.tanh(math.radians(float(txtDisplay.get())))
        self.display(self.current)

    def degrees(self):
        self.result = False
        self.current = math.degrees(float(txtDisplay.get()))
        self.display(self.current)

    def radians(self):
        self.result = False
        self.current = math.radians(float(txtDisplay.get()))
        self.display(self.current)


res = Calc()


txtDisplay = Entry(calc, font=('arial', 20, 'bold'), bd=30, bg='gray60', width=28, justify=RIGHT)
txtDisplay.grid(row=0, column=0, columnspan=4, pady=1)
txtDisplay.insert(0, '0')

numpad = '789456123'
i = 0
btn = []

for j in range(2, 5):
    for k in range(3):
        btn.append(Button(calc, width=6, height=2, font=('arial', 20, 'bold'), fg='yellow',bg="black",bd=4, text=numpad[i]))
        btn[i].grid(row=j, column=k, pady=1)
        btn[i]['command'] = lambda x=numpad[i]: res.numberEnter(x)
        i += 1

# Standard Calculator
Button(calc, text=chr(67), width=6, height=2, font=('arial', 20, 'bold'), bd=4, fg='yellow',bg="black",command=res.clear_entry).grid(row=1, column=0, pady=1)
Button(calc, text=chr(67) + chr(69), width=6, height=2, font=('arial', 20, 'bold'), bd=4, fg='yellow',bg="black",command=res.clear_all).grid(row=1, column=1, pady=1)
Button(calc, text=u'\u221A', width=6, height=2, font=('arial', 20, 'bold'), bd=4,fg='yellow', bg="black", command=res.sq_rt).grid(row=1, column=2, pady=1)
Button(calc, text='+', width=6, height=2, font=('arial', 20, 'bold'), bd=4, fg='yellow',bg="black",command=lambda: res.operation('add')).grid(row=1, column=3, pady=1)
Button(calc, text='-', width=6, height=2, font=('arial', 20, 'bold'), bd=4, fg='yellow',bg="black",command=lambda: res.operation('sub')).grid(row=2, column=3, pady=1)
Button(calc, text='*', width=6, height=2, font=('arial', 20, 'bold'), bd=4, fg='yellow',bg="black",command=lambda: res.operation('mul')).grid(row=3, column=3, pady=1)
Button(calc, text='/', width=6, height=2, font=('arial', 20, 'bold'), bd=4, fg='yellow',bg="black",command=lambda: res.operation('div')).grid(row=4, column=3, pady=1)
Button(calc, text='=', width=6, height=2, font=('arial', 20, 'bold'), bd=4, fg='yellow',bg="black",command=res.sum_of_total).grid(row=5,column=3, pady=1)
Button(calc, text='.', width=6, height=2, font=('arial', 20, 'bold'), bd=4, fg='yellow',bg="black",command=lambda: res.numberEnter('.')).grid(row=5, column=0, pady=1)
Button(calc, text='0', width=6, height=2, font=('arial', 20, 'bold'), bd=4, fg='yellow',bg="black",command=lambda: res.numberEnter(0)).grid(row=5, column=1, pady=1)
Button(calc, text=chr(177), width=6, height=2, font=('arial', 20, 'bold'), bd=4, fg='yellow',bg="black", command=res.PM).grid(row=5, column=2, pady=1)
# Scientific
Button(calc, text=u'\u03C0', width=6, height=2, font=('arial', 20, 'bold'), bd=4, fg='yellow',bg="black", command=res.pi).grid(row=1, column=4, pady=1)
Button(calc, text='sin', width=6, height=2, font=('arial', 20, 'bold'), bd=4, fg='yellow',bg="black", command=res.sin).grid(row=2,column=4,pady=1)
Button(calc, text='cos', width=6, height=2, font=('arial', 20, 'bold'), bd=4,fg='yellow', bg="black", command=res.cos).grid(row=2,column=5,pady=1)
Button(calc, text='tan', width=6, height=2, font=('arial', 20, 'bold'), bd=4, fg='yellow',bg="black", command=res.tan).grid(row=2,column=6,pady=1)
Button(calc, text='log', width=6, height=2, font=('arial', 20, 'bold'), bd=4,fg='yellow', bg="black", command=res.log).grid(row=4,column=4, pady=1)
Button(calc, text='sinh', width=6, height=2, font=('arial', 20, 'bold'), bd=4, fg='yellow',bg="black", command=res.sinh).grid( row=3, column=4, pady=1)
Button(calc, text='cosh', width=6, height=2, font=('arial', 20, 'bold'), bd=4, fg='yellow',bg="black", command=res.cosh).grid( row=3, column=5, pady=1)
Button(calc, text='tanh', width=6, height=2, font=('arial', 20, 'bold'), bd=4,fg='yellow', bg="black", command=res.tanh).grid(row=3, column=6, pady=1)
Button(calc, text='ln', width=6, height=2, font=('arial', 20, 'bold'), bd=4, fg='yellow',bg="black", command=res.ln).grid(row=4, column=5, pady=1)
Button(calc, text='exp', width=6, height=2, font=('arial', 20, 'bold'), bd=4,fg='yellow', bg="black", command=res.exp).grid(row=1,column=6, pady=1)
Button(calc, text='mod', width=6, height=2, font=('arial', 20, 'bold'), bd=4, fg='yellow',bg="black",command=lambda: res.operation('mod')).grid(row=5, column=6, pady=1)
Button(calc, text='e', width=6, height=2, font=('arial', 20, 'bold'), bd=4,fg='yellow', bg="black", command=res.e).grid(row=1,column=5, pady=1)
Button(calc, text='log2', width=6, height=2, font=('arial', 20, 'bold'), bd=4,fg='yellow', bg="black", command=res.log2).grid(row=4, column=6, pady=1)
Button(calc, text='deg', width=6, height=2, font=('arial', 20, 'bold'), bd=4, fg='yellow',bg="black", command=res.degrees).grid( row=5, column=4, pady=1)
Button(calc, text='rad', width=6, height=2, font=('arial', 20, 'bold'), bd=4, fg='yellow',bg="black", command=res.radians).grid(row=5, column=5, pady=1)
def Exit():
    if tkinter.messagebox.askyesno("Calculator", "Confirm if you want to quit") > 0:
        root.destroy()
        return


def Sci():
    root.resizable(width=False, height=False)
    root.geometry("835x568+0+0")


def Std():
    root.resizable(width=False, height=False)
    root.geometry("480x568+0+0")


menubar = Menu(calc)

file_menu = Menu(menubar, tearoff=0)
menubar.add_cascade(label="File", menu=file_menu)
file_menu.add_command(label="Standard", command=Std)
file_menu.add_command(label="Scientific", command=Sci)
file_menu.add_separator()
file_menu.add_command(label="Exit", command=Exit)

root.config(menu=menubar)
root.mainloop()