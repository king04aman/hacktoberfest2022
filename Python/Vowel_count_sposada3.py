#Author: Satya https://github.com/sposada3

#Import module
import re 

# Define function
def vowel_count(string):
    if re.search("[aeiouAEIOU]", string):
        total = re.findall("[aeiouAEIOU]", string)
        print(f"The total number of vowels is: {len(total)}")
    else:
        print("There is no match")

string = input("Please enter a string: ")
vowel_count(string)