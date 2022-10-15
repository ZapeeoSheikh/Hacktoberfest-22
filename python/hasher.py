## COPYRIGHT <SapphireKR> <2022> ##
## Made and written by: SapphireKR ##
import os
import sys
# pip install pyperclip
import pyperclip
import hashlib
print("A hashing project by: SapphireKR")

def sha256():
                usrinput = input("Convert to SHA-256 hashed text: ")
                usroutput = hashlib.sha256(usrinput.encode('ascii')).hexdigest()
                print('SHA-256 Output: ' + usroutput)
                ask = input("Copy to clipboard? (y/n)?: ")
                if ask == "y":
                                pyperclip.copy(usroutput)
                                chk = input("Paste the copied text here: ")
                                if chk == usroutput:
                                                print("The text has been copied correctly")
                                                input("Press Enter To Exit...")

                                else:
                                                print("Seems like the text was not copied to your clipboard correctly please try again")
                                                input("Press Enter To Exit...")

                if ask == "n":
                                input("Press Enter To Exit...")

def md5():
                usrinput = input("Convert to MD5 hashed text: ")
                usroutput = hashlib.md5(usrinput.encode('ascii')).hexdigest()
                print('MD5 Output: ' + usroutput)
                ask = input("Copy to clipboard? (y/n)?: ")
                if ask == "y":
                                pyperclip.copy(usroutput)
                                chk = input("Paste the copied text here: ")
                                if chk == usroutput:
                                                print("The text has been copied correctly")
                                                input("Press Enter To Exit...")

                                else:
                                                print("Seems like the text was not copied to your clipboard correctly please try again")
                                                input("Press Enter To Exit...")

                if ask == "n":
                                input("Press Enter To Exit...")


while True:
                print("Type $help for choosing")
                usrinput = input("Which hasher SHA-256 or MD5?: ")
                if usrinput == "$help":
                                print("""
                                Type sha256 to convert text to SHA-256 hash,
                                Type md5 to convert text to md5 hash,
                                Type exit to exit this program,
                                Type cls to clear the screen.
                                """)
                if usrinput == "sha256": sha256()

                if usrinput == "md5": md5()

                if usrinput == "exit": sys.exit()
                if usrinput == "cls": os.system("cls")
