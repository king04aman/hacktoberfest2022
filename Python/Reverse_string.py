# github.com/touhidulshawan

# function to reverse a given string
def reverse_string(string):
    string = string[::-1]
    return string


string = input("Enter string: ")
print(f"The reversed string of {string} is : ")

print(reverse_string(string))
