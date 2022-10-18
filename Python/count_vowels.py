phrase = str(input("Enter a phrase: "))

res = 0
for i in phrase:
    if(i in "aeiou"):
        res += 1

print("Total vowels in phrase: " + str(res))
