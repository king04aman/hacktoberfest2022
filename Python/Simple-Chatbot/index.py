from tkinter import *
from tkinter import messagebox
import mysql.connector
import pyttsx3
from pygame import mixer as song
import random
import webbrowser
import datetime


song.init()
sd = pyttsx3.init()
sd.setProperty("rate",150)
sd.setProperty("volume",2.0)
voices = sd.getProperty('voices')
sd.setProperty('voice', voices[0].id)

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


def speaker():
    val="\nYou:\n=>\t" + "Enter 1 for male voice, 2 for female voiced"
    t.insert(END,val)
    t.yview('end')


def greetings():
    return "Hi da maapla"

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
        sd.say(msg)
        sd.runAndWait()
        t.insert(END,ai_val)
        t.yview('end')
        

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

    elif(("bye" in txt2) or ("see you later" in txt2)):
        sd.say("Bye, see you Later ")
        sd.runAndWait()
        ch.destroy()

    elif(("speaker" in txt2)or("voices" in txt2) or("voices" in txt2) or ("Change speaker" in txt2)):
        speaker()

    elif(txt2==1 or txt2=="1"):
        sd.setProperty('voice', voices[0].id)
        sd.say("Speaker Changed")
        sd.runAndWait()
        t.yview('end')

    elif(txt2==2 or txt2=="2"):
        sd.setProperty('voice', voices[1].id)
        sd.say("Speaker Changed")
        sd.runAndWait()
        t.yview('end')

    elif(("browser" in txt2) or ("search" in txt2)):
        sd.say("Opening browser")
        sd.runAndWait()
        url = "https://www.google.com/"
        webbrowser.open(url)

    elif(("time" in txt2)):
         now = datetime.datetime.now()
         time=now.strftime("%H:%M")
         ai_val= "\nBot\n=>\tTime: "+ time
         t.insert(END,ai_val)
         t.yview('end')
         sd.say(time)
         sd.runAndWait()
    
    else:
        messagebox.showerror("Message","Bot Can't understand")
    try:
        msgbox.delete(0,END)
    except:
        pass



def chatpage():
    try:
        w2.destroy()
    except:
        pass
    global ch,t,msgbox
    ch=Tk()
    print("dfdhkjdg",uname)
    ch.title("ChatBot")
    ch.geometry("550x637+500+30")
    ch.config(bg="black")
    ch.resizable(False,False)
    scrollbar = Scrollbar(ch)
    fr=Frame(ch,bg="#4E944F",width=533,height=49).place(x=0,y=0)
    Label(fr,text="WELCOME, "+uname,bg="#4E944F",font=(20)).place(x=180,y=10)
    sd.say("WELCOME, "+uname)
    sd.runAndWait()
    t=Text(ch,bg="#E9EFC0",font=("Ink Free",21),fg="black",width=33,height=16,yscrollcommand=scrollbar.set)
    t.place(x=0,y=50)
    t.yview('end')
    t.see(END)
    scrollbar.config(command=t.yview)
    scrollbar.pack(side=RIGHT, fill=Y)
    txt=StringVar()
    msgbox=Entry(ch,textvariable=txt,font=("bold",20),width=31,fg="red",bg="#d1c9c9")
    msgbox.place(x=0,y=599)
    msgbox.focus()
    Button(ch,text="Send",bg="#4E944F",font=("bold",14),command=s).place(x=471,y=599)
    ch.bind('<Return>',s)
    ch.mainloop()



def login_check():
    usn=lu.get()
    psn=lp.get()

    global text,uname

    try:
        cur.execute("select * from log_det where username='%s'"%(usn))
    except:
        messagebox.showerror("Try Again","Check Username and Password")
        lpu.delete(0,END)
        lpp.delete(0,END)
        
    data = cur.fetchall()
    print(data)

    try:
        if(usn==data[0][2] and psn==data[0][3]):
            text = "Welcome, " + data[0][0]
            print(text)
            uname=data[0][0]
            chatpage()
        else:
            messagebox.showerror("Try Again","Check Username and Password")
            lpu.delete(0,END)
            lpp.delete(0,END)
    except:
        messagebox.showerror("Try Again","Check Username and Password")
        lpu.delete(0,END)
        lpp.delete(0,END)

def login():
    w.destroy()
    global w2,lu,lp,lpu,lpp
    w2=Tk()
    w2.title("Chat Bot")
    w2.geometry("925x500+300+200")
    w2.config(bg="White")
    w2.resizable(False,False)
    img=PhotoImage(file="E:\\python_codes\\app project\\chatbot.png")
    Label(w2,image=img,bg="white").place(x=50,y=100)

    f2=Frame(w2,width=350,height=340,bg="#e9f0ea")
    f2.place(x=450,y=60)

    Label(f2,text="Sign-In",font=("bold",20)).place(x=120,y=20)


    def showup(e):
        lpu.delete(0,'end')

    def takeaway(e):
        check = lpu.get()
        if(check==""):
            lpu.insert(0,"Username")
    lu=StringVar()
    lpu=Entry(f2,textvariable=lu,width=23,border=1,font=("bold",15))
    lpu.place(x=50,y=120)
    lpu.insert(0,"Username")
    lpu.bind("<FocusIn>",showup)
    lpu.bind("<FocusOut>",takeaway)


    def showup(e):
        lpp.delete(0,'end')

    def takeaway(e):
        check = lpp.get()
        if(check==""):
            lpp.insert(0,"Password")
    lp=StringVar()
    lpp=Entry(f2,textvariable=lp,width=23,border=1,font=("bold",15),show="*")
    lpp.place(x=50,y=190)
    lpp.insert(0,"Password")
    lpp.bind("<FocusIn>",showup)
    lpp.bind("<FocusOut>",takeaway)

    Button(f2,text="Log-in",width=10,font=("bold",15),bg="#5fb375",fg="white",command=login_check).place(x=120,y=240)

    w2.mainloop()


def sign_complete():
    global n1,ph1
    n1=n.get()
    ph1=ph.get()
    un1=un.get()
    psd1=psd.get()

    try:
        cur.execute("insert into log_det values ('%s',%d,'%s','%s')" % (n1,ph1,un1,psd1))
        db.commit()
        messagebox.showinfo("Account","Account Created")
        login()
    except:
        messagebox.showerror("Try Again","Mobile Number already Registered")
        e1.delete(0, END)
        e2.delete(0, END)
        e3.delete(0,END)
        e4.delete(0,END)


def sign_up():

    global w,n,ph,un,psd,e1,e2,e3,e4,img
    w=Tk()
    w.title("Chat Bot")
    w.geometry("925x500+300+200")
    w.config(bg="White")
    w.resizable(False,False)
    img=PhotoImage(file='chatbot.png')
    Label(w,image=img,bg="white").place(x=50,y=100)

    f=Frame(w,width=350,height=390,bg="#e9f0ea")
    f.place(x=450,y=40)

    Label(f,text="Sign-Up",font=("bold",20)).place(x=120,y=20)


    def showup(e):
        e1.delete(0,'end')

    def takeaway(e):
        check = e1.get()
        if(check==""):
            e1.insert(0,"Name")
    n=StringVar()
    e1=Entry(f,textvariable=n,width=23,border=1,font=("bold",15))
    e1.place(x=50,y=100)
    e1.insert(0,"Name")
    e1.bind("<FocusIn>",showup)
    e1.bind("<FocusOut>",takeaway)

    

    def showup(e):
        e2.delete(0,'end')

    def takeaway(e):
        check = e2.get()
        if(check==""):
            e2.insert(0,"Mobile Number")
    ph=IntVar()
    e2=Entry(f,textvariable=ph,width=23,border=1,font=("bold",15))
    e2.place(x=50,y=150)
    e2.insert(0,"Mobile Number ")
    e2.bind("<FocusIn>",showup)
    e2.bind("<FocusOut>",takeaway)


    def showup(e):
        e3.delete(0,'end')

    def takeaway(e):
        check = e3.get()
        if(check==""):
            e3.insert(0,"Username")
    un=StringVar()
    e3=Entry(f,textvariable=un,width=23,border=1,font=("bold",15))
    e3.place(x=50,y=200)
    e3.insert(0,"Username")
    e3.bind("<FocusIn>",showup)
    e3.bind("<FocusOut>",takeaway)


    def showup(e):
        e4.delete(0,'end')

    def takeaway(e):
        check = e4.get()
        if(check==""):
            e4.insert(0,"Password")
    psd=StringVar()
    e4=Entry(f,textvariable=psd,width=23,border=1,font=("bold",15),show="*")
    e4.place(x=50,y=250)
    e4.insert(0,"Password")
    e4.bind("<FocusIn>",showup)
    e4.bind("<FocusOut>",takeaway)

    try: 
        Button(f,text="Submit",width=10,font=("bold",15),bg="#5fb375",fg="white",command=sign_complete).place(x=120,y=290)
    except:
        messagebox.showinfo("Account","Fill all the details")

    
    Button(f,text="Log-in",width=10,font=("bold",15),bg="#5fb375",fg="white",command=login).place(x=120,y=340)

    w.mainloop()

sign_up()
