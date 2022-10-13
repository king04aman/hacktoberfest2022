#Guess the number the computer has in mind.
import random

def guess(num,allowedCount):
    randomNum = random.randint(1, num)
    guess = 0
    count = 0
    while guess != randomNum and count != allowedCount:
        guess = int(input("Guess the number: "))
        count += 1
        tries = allowedCount - count
        if guess < randomNum:
            print(f"Guess again, value is too low. You have {tries} tries left!")
        elif guess > randomNum:
            print(f"Guess again, value is too high. You have {tries} tries left!")
    if guess != randomNum and count == allowedCount:
        print(f"Better Luck Next Time, the value was {randomNum}.")
    else:
        print(f'Congratulations!!!, You have guessed {randomNum} correctly in {count} tries!!!')

def guessComp(num):
    low = 1
    high = num
    feedback = ""
    count = 0
    while feedback != "c":
        if low != high:
            guess = random.randint(low,high)
        else:
            guess = low
        count += 1
        feedback = input(f"The computer guessed {guess}. is it higher(H), lower(L) or Correct(C)??").lower()
        if feedback == 'h':
            high = guess - 1
        elif feedback == 'l':
            low = guess + 1
    print(f"The computer found your number ({guess}) in {count} tries!!!")

print("GUESS THE NUMBER")
print('Select a level of difficulty \n \
press 1 for Easy \n \
press 2 for Medium \n \
press 3 for Hard \n\n \
press 5 to play Computer guess your number')

try:
    level = int(input())
    if level == 1:
        print('Easy Difficulty - 1 to 10 \n You have 3 Guesses.')
        guess(10,3)
    elif level == 2:
        print('Medium Difficulty - 1 to 40 \n You have 5 Guesses.')
        guess(40,5)
    elif level ==3:
        print('Hard Difficulty - 1 to 100 \n You have 5 Guesses.')
        guess(100,5)
    elif level == 5:
        high = int(input('Provide the range which include your number: '))
        guessComp(high)
    else:
        print("Please make a valid selection.")
except:
    print("Enter a valid input")
