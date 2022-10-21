# Contributor: Catherine Muthoni(@cate865)

# Write a program to print the Fibonacci series up to a given number.

def fibonacci(n):
    fib_list = []
    for i in range(0,n+1):
        if i == 0:
            fib_list.append(0)
        elif i == 1:
            fib_list.append(1)
        else:
            fib_list.append(fib_list[i-1]+fib_list[i-2])

    for i in fib_list:
        print(i)

fibonacci(6)
