# Python 
_Commit Your Python files here_.
# Floyds Triangle in Python 
#Reading number of row
row= int(input('Enter number of rows:'))
#setting number to 1
number = 1
print("Floyd's triangle is:")
for i in range (1,row +1):
    for j in range (1, i+1):
        print(number,end = "\t")
        number += 1
    print()
   
