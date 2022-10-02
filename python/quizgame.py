print ("Welcome to my quiz!")
print ("Made by Azka Ahmad")
print ("azkaah2001@gmail.com")

print(" ")

playing = input("Do you want to play the game? ")

if playing.lower() != "yes":
    print("Quiting the game!")
    quit()

question = 1
score = 0

print(" ")
print ("QUESTION ", question)
answer = input("What is your name? ")
print(" ")
if answer.lower() == "azka":
    print("Correct!")
    question += 1
    score += 1
else:
    print("You've given an incorrect answer.")
    question += 1

print(" ")
print ("QUESTION ", question)
answer = input("What field is your fellowship in? ")
print(" ")
if answer.lower() == "data science":
    print("Correct!")
    question += 1
    score += 1
else:
    print("You've given an incorrect answer.")
    question += 1

print(" ")
print ("QUESTION ", question)
answer = input("What is the 9th month of the year? ")
print(" ")
if answer.lower() == "september":
    print("Correct!")
   #question += 1
    score += 1
else:
    print("You've given an incorrect answer.")
    #question += 1

print (" ")
print ("You got ", score , " out of ", question, " questions right!")