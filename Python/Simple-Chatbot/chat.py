from tkinter import *
from tkinter import messagebox
import pyttsx3
import random
from pygame import mixer as song
import time
from PIL import Image, ImageTk
import mysql.connector

db = mysql.connector.connect(
  host="localhost",
  user="root",
  password="root"
)

cur = db.cursor() 

try:
    cur.execute("create database login")
    cur.execute("use login")
    cur.execute("create table log_det (name varchar(30),phone int(11) primary key,username varchar(30),passwd varchar(30))")

except:
    cur.execute("use login")

cur.execute("select * from log_det where name='%s'"%())

datas= cur.fetchall()
for i in datas:
    print()




song.init()
sd = pyttsx3.init()
sd.setProperty("rate",150)
sd.setProperty("volume",2.0)
voices = sd.getProperty('voices')
sd.setProperty('voice', voices[0].id)


def greetings():
    return "Hi da mapla"

def joke():
    jk=["what do you call a security gaurd in a samsung showroom? Gauridan of the galaxy",
        """What’s the best thing about Switzerland?            I don’t know, but the flag is a big plus.""",
        """Hear about the new restaurant called Karma?         There’s no menu: You get what you deserve.""",
        "I am so poor. I can't even pay attention"]
    jkc = random.randint(0,3)
    return (jk[jkc])

def songs():
    song_list=["Elangaathu veesudhey.mp3","Kadhal Valarthen.mp3","Sangetha Megam.mp3"]
    sc = random.randint(0,2)
    return (song_list[sc])

    
    


def s(q):
    print("inside")
    txt=msgbox.get()
    txt2=txt.lower()
    val="\nYou:\n=>\t" + txt
    t.insert(END,val)
    if txt2 in ["hi","hello","hey"]:
        print("ghhfh")
        msg=greetings()
        ai_val= "\nBot\n=>\t"+msg
        t.insert(END,ai_val)
        t.yview('end')
        sd.say(msg)
        sd.runAndWait()

    elif("joke" in txt2):
        msg=joke()
        ai_val= "\nBot\n=>\t"+msg
        t.insert(END,ai_val)
        t.yview('end')
        sd.say(msg)
        sd.runAndWait()

    elif(("song" in txt2) or ("sing" in txt2)):
        msg=songs()
        ai_val= "\nBot\n=>\tSong Name: "+ msg + "\n=>\tEnter 's' to stop, 'p' to pause, 'r' to resume"
        t.insert(END,ai_val)
        t.yview('end')
        song.music.load(msg)
        song.music.play()

    elif(txt2=="s"):
        song.music.stop()
    elif(txt2=="p"):
        song.music.pause()
    elif(txt2=="r" ):
        song.music.unpause()
        
        
        """
        song_list=["Elangaathu veesudhey","Kadhal Valarthen.mp3","Sangetha Megam.mp3"]
        sc = random.randint(0,2)
        return (song_list[sc])
        """
        
    
    else:
        messagebox.showerror("Message","Bot Can't understand")
    msgbox.delete(0,END)

ch=Tk()
ch.title("ChatBot")
ch.geometry("550x670")
ch.config(bg="black")
ch.resizable(False,False)

#f1=Frame(ch,bg="green",width=510,height=540)
#f1.place(x=20,y=50)
scrollbar = Scrollbar(ch)
t=Text(ch,bg="#79f299",font=("Ink Free",22),fg="white",width=31,height=15,yscrollcommand=scrollbar.set)
t.place(x=18,y=50)
t.yview('end')
t.see(END)
scrollbar.config(command=t.yview)
scrollbar.pack(side=RIGHT, fill=Y)
txt=StringVar()
msgbox=Entry(ch,textvariable=txt,font=("bold",20),width=28,fg="red",bg="white")
msgbox.place(x=18,y=610)
msgbox.focus()


Button(ch,text="Send",bg="red",font=("bold",14),command=s).place(x=457,y=610)
ch.bind('<Return>',s)

ch.mainloop()
