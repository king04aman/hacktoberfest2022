string = input("Enter a string to count number of vowels: ")
string = str.casefold() 
count = {x:sum([1 for char in string if char == x]) for x in 'aeiou'}
print(count)