#List is global
list = ['1', '2', '3', '4', '5', '6', '7', '8', '9']

def player_1():
    #Input must be between 1-9 and if any position is already occupied with an X or O prompt use a valid input
    X = int(input("Enter the position: "))
    a = X - 1
    if X>9 and X<1:
        print("Enter a valid position.")
        player_1()
    else:
        #checking for position availability
        if list[a]=='X' or list[a]=='O':
            print("That position is already occupied.")
            player_1()
        else:
            board_opt(X, 'X')

def player_2():
    #Input must be between 1-9 and if any position is already occupied with an X or O prompt use a valid input
    Y = int(input("Enter the position: "))
    b = Y - 1
    if Y>9 and Y<1:
        print("Enter a valid position.")
        player_2()
    else:
        #checking for position availability
        if list[b]=='X' or list[b]=='O':
            print("That position is already occupied.")
            player_2()
        else:
            board_opt(Y, 'O')


#recursion for the Input
def game():
    for i in range(1, 10):
        #Algorithm goes here - 8 combinations are available
        #along x axis
        if (list[0]==list[1]==list[2]):
            if list[0]=='X':
                print("Player 1 - X Wins!")
                break
            else:
                print("Player 2 - O Wins!")
                break
        elif (list[3]==list[4]==list[5]):
            if list[3]=='X':
                print("Player 1 - X Wins!")
                break
            else:
                print("Player 2 - O Wins!")
                break
        elif (list[6]==list[7]==list[8]):
            if list[6]=='X':
                print("Player 1 - X Wins!")
                break
            else:
                print("Player 2 - O Wins!")
                break
        #along y axis
        elif (list[0]==list[3]==list[6]):
            if list[0]=='X':
                print("Player 1 - X Wins!")
                break
            else:
                print("Player 2 - O Wins!")
                break
        elif (list[1]==list[4]==list[7]):
            if list[1]=='X':
                print("Player 1 - X Wins!")
                break
            else:
                print("Player 2 - O Wins!")
                break
        elif (list[2]==list[5]==list[8]):
            if list[2]=='X':
                print("Player 1 - X Wins!")
                break
            else:
                print("Player 2 - O Wins!")
                break
        #cross combination
        elif (list[0]==list[4]==list[8]):
            if list[0]=='X':
                print("Player 1 - X Wins!")
                break
            else:
                print("Player 2 - O Wins!")
                break
        elif (list[2]==list[4]==list[6]):
            if list[2]=='X':
                print("Player 1 - X Wins!")
                break
            else:
                print("Player 2 - O Wins!")
                break
        elif(i%2==1):
            player_1()
        elif(i%2==0):
            player_2()

#This is where board gets updated
def board_opt(number, choice):
    #Tell me we can use tuples here So I can update it easily
    if (number == 1):
        del list[0]
        list.insert(0, choice)
    elif (number == 2):
        del list[1]
        list.insert(1, choice)
    elif (number == 3):
        del list[2]
        list.insert(2, choice)
    elif (number == 4):
        del list[3]
        list.insert(3, choice)
    elif (number == 5):
        del list[4]
        list.insert(4, choice)
    elif (number == 6):
        del list[5]
        list.insert(5, choice)
    elif (number == 7):
        del list[6]
        list.insert(6, choice)
    elif (number == 8):
        del list[7]
        list.insert(7, choice)
    else:
        del list[8]
        list.insert(8, choice)

    print(
    """
        -------------------------------------
        |           |           |           |
        |    """,list[0],"""    |    """,list[1],"""    |    """,list[2],"""    |
        |           |           |           |
        -------------------------------------
        |           |           |           |
        |    """,list[3],"""    |    """,list[4],"""    |    """,list[5],"""    |
        |           |           |           |
        -------------------------------------
        |           |           |           |
        |    """,list[6],"""    |    """,list[7],"""    |    """,list[8],"""    |
        |           |           |           |
        -------------------------------------
    """
    )

#startup
def evoker():
    print(
    """
                   TIC - TAC - TOE
        -------------------------------------
        |           |           |           |
        |    """,1,"""    |    """,2,"""    |    """,3,"""    |
        |           |           |           |
        -------------------------------------
        |           |           |           |
        |    """,4,"""    |    """,5,"""    |    """,6,"""    |
        |           |           |           |
        -------------------------------------
        |           |           |           |
        |    """,7,"""    |    """,8,"""    |    """,9,"""    |
        |           |           |           |
        -------------------------------------
    """
    )
    n = input("Enter 1 to start: ")
    if n=='1':
        game()
    else:
        print("Invalid Input. Please retry.")
        evoker()

evoker()
