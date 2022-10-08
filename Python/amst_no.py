#GITHUB USERNAME: kbhavre

num = int(input("Enter a 3 digit number : "))
 
s = 0
temp = num

while temp > 0:
    digit = temp % 10
    s += digit * digit * digit
    temp = temp//10
 
if s==num:
    print("It's an Armstrong number")
else:
    print("It's not an Armstrong number")
