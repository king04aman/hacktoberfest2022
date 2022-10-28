#This micro project will recogninize the type of sentence we are writing whether a question or a simple sentence or an affermative one
def question_finder(sentence):
    parameters = ("when", "Why", "how", "what", "who") 
    capital = sentence.capitalize() #Capitalizes the sentence
    if sentence.startswith(parameters):
        return"{}?".format(capital)
    else:
        return"{}.".format(capital)     

data = []

while True: #Identifies the type of sentence and then displays ? or . as per the questions need.
    yourdata = input("Type a sentence")
    if yourdata == 'stop': #We can contiously write any number of sentences and to stop writing and display the output simply type stop and the correct format will be displayed
        break
    else:
        data.append(question_finder(yourdata))
        
print(" \n  ".join(data))
