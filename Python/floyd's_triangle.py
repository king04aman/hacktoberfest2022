# Python Program to Print Floyd's Triangle

rows = int(input("Please Input the Number of Rows  : "))
number = 1

print("Floyd's Triangle") 
for i in range(1, rows + 1):
    for j in range(1, i + 1):        
        print(number, end = '  ')
        number = number + 1
    print()