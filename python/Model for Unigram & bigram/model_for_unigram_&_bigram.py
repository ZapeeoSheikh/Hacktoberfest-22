import re # Regular expression Lib
def N_gram(text,n):
    # splits sentences into tokens
    tokens =re.split("\\s+",text) # splits the text
    ngram=[] # created a empty list 
    # collect the n-gram
    for i in range(len(tokens)-n+1): # looping through length of the file
        temp = [tokens[j] for j in range(i,i+n)] # indexing through the data and then saving it in temp
        ngram.append(" ".join(temp)) # adding the data according to the value "uni(1) or bi(2)" in to the list
    return ngram # returns the list

# Function which is used to produce uni_gram
def uni_gram():
    uni = 1
    infile = open("greeneggs.txt","r") # opening the file in read mode
    for inLine in infile: # looping through the file
        uni_words = N_gram(inLine,uni) # calling the N_gram function, give the function the input file and the value according to which are output will be uni 0r bi-gram 
        word =str(uni_words) # converting the list into string line by line
        outFile = open("unigram.txt","a") # creating and then opeing the output file
        outFile.write(word) # writing the data on the file line by line
        outFile.write("\n") # adding a new space after each line
    outFile.close() # closing the file
        

# Function which is used to produce uni_gram
def bi_gram():
    bi = 2
    infile = open("greeneggs.txt","r") # opening the file in read mode
    for inLine in infile: # looping through the file
        bi_words = N_gram(inLine,bi) # calling the N_gram function, give the function the input file and the value according to which are output will be uni 0r bi-gram 
        word =str(bi_words)# converting the list into string line by line
        outFile = open("bigram.txt","a") # creating and then opeing the output file
        outFile.write(word) # writing the data on the file line by line
        outFile.write("\n") # adding a new space after each line
    outFile.close() # closing the file
        
def main():    # main function to call both of the functions at the same time
  uni_gram()
  bi_gram()

main() # main function runs from here 

