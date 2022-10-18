# Basic Calculator Code in Python by Milind Murmu
# GitHub username ~ @milind64

def add(a,b):
    return a+b

def subtract(a,b):
    return a-b

def multiply(a,b):
    return a*b

def divide(a,b):
    return a/b

# Driver Code
ch = int(input("Choose  1 to calculate\n\t0 to end\n"))
while(ch):
    print("Select Operation + , - , x , / ")
    o = input()
    a = int(input("Enter first operator : "))
    b = int(input("Enter second operator : "))
    if(o == "+"):
        print(a,"+",b,"=",add(a,b))
        ch = int(input("\nChoose  1 to calculate\n\t0 to end\n"))
    elif(o == "-"):
        print(a,"-",b,"=",subtract(a,b))
        ch = int(input("\nChoose  1 to calculate\n\t0 to end\n"))
    elif(o == "x"):
        print(a,"x",b,"=",multiply(a,b))
        ch = int(input("\nChoose  1 to calculate\n\t0 to end\n"))
    elif(o == "-"):
        print(a,"/",b,"=",divide(a,b))
        ch = int(input("\nChoose  1 to calculate\n\t0 to end\n"))
    else:
        print("Invalid Input")
        ch = int(input("\nChoose  1 to calculate\n\t0 to end\n"))