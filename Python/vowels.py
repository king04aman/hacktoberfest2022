# Python3 program to count vowels
# in a string

# Function to check the Vowel
def isVowel(ch):
	return ch.upper() in ['A', 'E', 'I', 'O', 'U']

# Returns count of vowels in str 
def countVowels(str):
	count = 0
	for i in range(len(str)):

		# Check for vowel
		if isVowel(str[i]):
			count += 1
	return count

# Driver Code

# string object 
str = 'abc de'

# Total number of Vowels
print(countVowels(str))

