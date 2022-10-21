# Contributor: Catherine Muthoni(@cate865)

# Problem: Write a program to print the sum of digit of a number.

def digit_sum(num):
    str_num = str(num)
    num_sum = 0

    for i in str_num:
        num_sum = num_sum + int(i)

    return num_sum

print(digit_sum(12345))
