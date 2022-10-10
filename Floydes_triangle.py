print("Enter the Number of Rows: ", end="")
row = int(input())

num = 1
for i in range(row):
    for j in range(i+1):
        print(num, end=" ")
        num = num+1
    print()