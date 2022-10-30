import random
from tkinter import *
root=Tk()
root.title("realgame")


e=Entry(root,width=45,borderwidth=5)
e.grid(row=0,column=0,columnspan=3,padx=10,pady=10)

def rock():
    L=["rock","paper","scissors"]
    k=random.choice(L)
    p="computer's choice=paper,you lose!"
    s="computer's choice=scissors,you win!"
    r="computer's choice=rock,it's a tie!"
    if k=="paper":
        e.insert(0,p)
    elif k=="rock":
        e.insert(0,r)
    elif k=="scissors":
        e.insert(0,s)

def scissors():
    L=["rock","paper","scissors"]
    k=random.choice(L)
    p="computer's choice=paper,you win!"
    s="computer's choice=scissors,it's a tie!"
    r="computer's choice=rock,you lose!"
    if k=="paper":
        e.insert(0,p)
    elif k=="rock":
        e.insert(0,r)
    elif k=="scissors":
        e.insert(0,s)

def paper():
    L=["rock","paper","scissors"]
    k=random.choice(L)
    p="computer's choice=paper,it's a tie!"
    s="computer's choice=scissors,you lost!"
    r="computer's choice=rock,you won!"
    if k=="paper":
        e.insert(0,p)
    elif k=="rock":
        e.insert(0,r)
    elif k=="scissors":
        e.insert(0,s)

def clear():
    e.delete(0,END)


button1=Button(root,text="rock",command=rock,padx=40,pady=25,borderwidth=4)
button2=Button(root,text="paper",command=paper,padx=40,pady=25,borderwidth=4)
button3=Button(root,text="scissors",command=scissors,padx=38,pady=25,borderwidth=4)
button4=Button(root,text="play again",command=clear,padx=149,pady=30,borderwidth=7)
button5=Button(root,text="EXIT",command=root.quit,padx=166,pady=30,borderwidth=7)


button1.grid(row=1,column=0)
button2.grid(row=1,column=1)
button3.grid(row=1,column=2)
button4.grid(row=2,column=0,columnspan=3)
button5.grid(row=3,column=0,columnspan=3)


root.mainloop()