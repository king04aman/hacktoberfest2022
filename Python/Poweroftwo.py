# github username:- Khusbu853
# program to tell whether the given number is power of 2 or not

def poweroftwo(n):
    if n <= 0:
        return False
    else:
        return n & (n - 1) == 0


n = int(input('Enter a number: '))

if poweroftwo(n):
    print(n,"is a power of two")
else:
    print(n,"is not a power of two")