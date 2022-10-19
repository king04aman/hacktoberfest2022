print("\t\t\t\t\nWELCOME TO CALCULATOR \n")
num1 =int(input("enter first num:"))
num2 =int(input("enter second num:"))

print("\n choose the option \n1. +\n2. -\n3. *\n4. /\n")
choice = input("enter your choice:")

if  choice== '+':
    print(f"the addition of {num1} and {num2} is:", num1+num2)
elif choice== '-':
    print(f"the subtraction of {num1} and {num2} is:", num1-num2)

elif choice== '*':
    print(f"the multiplication of {num1} and {num2} is:", num1*num2)
    
elif choice== '/':
    print(f"the division of {num1} and {num2} is:", num1/num2)
else:
    print("this choice is not available")
    print("thankyou")
