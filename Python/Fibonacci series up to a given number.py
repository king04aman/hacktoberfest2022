n_terms = int(input ("Give a number :  "))  

n_1 = 0  
n_2 = 1  
count = 0  

if n_terms <= 0:  
    print ("Given number is not valid, Please enter a positive integer")  
elif n_terms == 1:  
    print ("Fibonacci series up to ", n_terms, ": ")  
    print(n_1)  
else:  
    print ("Fibonacci series up to a given number:")  
    while count < n_terms:  
        print(n_1)  
        nth = n_1 + n_2
        n_1 = n_2  
        n_2 = nth  
        count += 1  
