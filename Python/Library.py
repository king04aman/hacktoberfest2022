class Library:
    def __init__(self, listOfBooks):
        self.books = listOfBooks
        
    def displayAvailableBooks(self):
        print("Books present in this library are:  ")
        for book in self.books:
            print(" |-" + book)
    def borrowBook(self, bookName):
        if bookName in self.books:
            print(f"You have been issued {bookName} . please keep it safe and return it on time")
            self.books.remove(bookName)
            return True
        else:
            print("Sorry, Wheather This Book Is Not Present In Our Library Or May Be This book has already been issued to someone else . please wait untill it get available")
            return False

    def returnBook(self, bookName):
        self.books.append(bookName)
        print("Thanks for the returning this book ! Hope you enjoyed reading it . have a great day")


class Student:
    def requestBook(self):
        self.book = input("Enter the name of the book you want to Borrow : ")
        return self.book

    def returnBook(self):
        self.book = input("Enter the name of the book you want to Add/Return : ")
        return self.book


if __name__ == "__main__":
    CentralLibrary = Library(["Algorithms", "Django", "Clrs", "Python Notes"])
    student = Student()
    # CentralLibrary.displayAvailableBooks()
    while(True):
        WelcomeMsg = '''
        
         ==== Welcome to Central Library ====
        Please Choose An Option:
        1. List All The Books
        2. Request A Book
        3. Add/Return A Book
        4. Exit The Library
        '''
        print(WelcomeMsg)
        a = int(input("Enter A Choice : "))
        if a == 1:
            CentralLibrary.displayAvailableBooks()
        elif a == 2:
            CentralLibrary.borrowBook(student.requestBook())
        elif a == 3:
            CentralLibrary.returnBook(student.returnBook())
        elif a == 4:
            print("Thanks For Choosing Central Library ! Have a Great Day")
            exit()
        else:
            print("Invalid Choice")


        
        



