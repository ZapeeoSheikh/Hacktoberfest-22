from tkinter import *
import tkinter.font as font
root=Tk()
root.title("Standard Calculator")
myfont=font.Font(size=15)


e1=Entry(root,width=40,borderwidth=7,font=100)
e1.grid(row=0,column=0,columnspan=4,padx=10,pady=10)

def click(number):
    current=e1.get()
    e1.delete(0, END)
    e1.insert(0,str(current)+str(number))

def clear():
    e1.delete(0,END)

def add():
    global fnumber
    global math
    math="addition"
    fnumber=int(e1.get())
    e1.delete(0,END)

def product():
    global fnumber
    fnumber=int(e1.get())
    global math
    math="multiplication"
    e1.delete(0,END)

def subtract():
    global fnumber
    fnumber=int(e1.get())
    e1.delete(0,END)
    global math
    math="difference"

def divide():
    global fnumber
    fnumber=int(e1.get())
    global math
    math="division"
    e1.delete(0,END)
    

def equal():
    snumber=e1.get()
    e1.delete(0,END)
    if math=="addition":
        e1.insert(0,fnumber+int(snumber))
    elif math=="multiplication":
        e1.insert(0,fnumber*int(snumber))
    elif math=="difference":
        e1.insert(0,fnumber-int(snumber))
    elif math=="division":
        e1.insert(0,(fnumber/int(snumber)))






button7=Button(root,text="7",padx=50,pady=15,borderwidth=5, command=lambda: click(7))
button8=Button(root,text="8",padx=50,pady=15,borderwidth=5,command=lambda: click(8))
button9=Button(root,text="9",padx=50,pady=15,borderwidth=5,command=lambda: click(9))
button4=Button(root,text="4",padx=50,pady=15,borderwidth=5,command=lambda: click(4))
button5=Button(root,text="5",padx=50,pady=15,borderwidth=5,command=lambda: click(5))
button6=Button(root,text="6",padx=50,pady=15,borderwidth=5,command=lambda: click(6))
button1=Button(root,text="1",padx=50,pady=15,borderwidth=5,command=lambda: click(1))
button2=Button(root,text="2",padx=50,pady=15,borderwidth=5,command=lambda: click(2))
button3=Button(root,text="3",padx=50,pady=15,borderwidth=5,command=lambda: click(3))
button0=Button(root,text="0",padx=50,pady=15,borderwidth=5,command=lambda: click(0))
button_add=Button(root,text="+",padx=15,pady=15,borderwidth=5,command=add)
button_subtract=Button(root,text="-",padx=18,pady=15,borderwidth=5,command=subtract)
button_product=Button(root,text="x",padx=18,pady=15,borderwidth=5,command=product)
button_divide=Button(root,text="/",padx=18,pady=15,borderwidth=5,command=divide)
button_enter=Button(root,text="=",padx=49,pady=15,borderwidth=5,command=equal)
button_clear=Button(root,text="Clear",padx=33,pady=15,borderwidth=5,command=clear)




button7['font']=myfont
button8['font']=myfont
button9['font']=myfont
button4['font']=myfont
button5['font']=myfont
button6['font']=myfont
button1['font']=myfont
button2['font']=myfont
button3['font']=myfont
button0['font']=myfont
button_add['font']=myfont
button_subtract['font']=myfont
button_product['font']=myfont
button_divide['font']=myfont
button_enter['font']=myfont
button_clear['font']=myfont





button7.grid(row=1,column=0)
button8.grid(row=1,column=1)
button9.grid(row=1,column=2)
button4.grid(row=2,column=0)
button5.grid(row=2,column=1)
button6.grid(row=2,column=2)
button1.grid(row=3,column=0)
button2.grid(row=3,column=1)
button3.grid(row=3,column=2)
button0.grid(row=4,column=0)
button_add.grid(row=1,column=3)
button_subtract.grid(row=2,column=3)
button_product.grid(row=3,column=3)
button_divide.grid(row=4,column=3)
button_enter.grid(row=4,column=2)
button_clear.grid(row=4,column=1)


root.mainloop()
