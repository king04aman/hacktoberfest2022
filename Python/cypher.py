logo = """           
 ,adPPYba, ,adPPYYba,  ,adPPYba, ,adPPYba, ,adPPYYba, 8b,dPPYba,  
a8"     "" ""     `Y8 a8P_____88 I8[    "" ""     `Y8 88P'   "Y8  
8b         ,adPPPPP88 8PP"""""""  `"Y8ba,  ,adPPPPP88 88          
"8a,   ,aa 88,    ,88 "8b,   ,aa aa    ]8I 88,    ,88 88          
 `"Ybbd8"' `"8bbdP"Y8  `"Ybbd8"' `"YbbdP"' `"8bbdP"Y8 88   
            88             88                                 
           ""             88                                 
                          88                                 
 ,adPPYba, 88 8b,dPPYba,  88,dPPYba,   ,adPPYba, 8b,dPPYba,  
a8"     "" 88 88P'    "8a 88P'    "8a a8P_____88 88P'   "Y8  
8b         88 88       d8 88       88 8PP""""""" 88          
"8a,   ,aa 88 88b,   ,a8" 88       88 "8b,   ,aa 88          
 `"Ybbd8"' 88 88`YbbdP"'  88       88  `"Ybbd8"' 88          
              88                                             
              88           
"""
print(logo)
alphabet = [
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm','n','o','p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']

print("Hello This Is  Harveer Narwar\n I Welcome You All!!!\n")


def encrypt(text, shift):
    cipher_text = ""
    for letter in text:
        position = alphabet.index(letter)
        if position < 21:
            new_position = position + shift
        else:
            new_position = position + shift - 26
        cipher_text += alphabet[new_position]
    print(f"The encoded text is {cipher_text}")


def decrypt(text, shift):
    cipher_text = ""
    for letter in text:
        position = alphabet.index(letter)
        if position < 0:
            new_position = 21 - position - shift
        else:
            new_position = position - shift
        cipher_text += alphabet[new_position]
    print(f"The encoded text is {cipher_text}")
def start():
  a= input("Type 'encode' to encrypt, type 'decode' to decrypt:\n")
  if a == "decode":
    msg = input("Type your encrypted maessage:\n").lower()
    shift = int(input("Type the shift number:\n"))
    decrypt(msg, shift)
  elif a=="encode":
    text = input("Type your message:\n").lower()
    shift = int(input("Type the shift number:\n"))
    encrypt(text,shift)
  else:
    print("Opps!!!  You entered the Wrong choice")


start()

d= int(input("If you want to continue press 1 else press any key:   ",))
if d==1:
  start()
else:
  print("Thank You !!!! , Have A Nice Day🙂🙂🙂")


