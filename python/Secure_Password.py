'''
Create a python program to secure an existing password by replacing a set of characters with the corresponding 'password-secure' characters (provided as tuple). 
Example:
    SECURE = (('s' , '$'), ('and' , '&'), 
             ('a' , '@'), ('o' , '0'), ('i' , '1'),
             ('I' , '|'))

    Input :
    password = "Indians123"

    Output:
    Your secure password is |nd1@n$123

'''

SECURE = (('s' , '$'), ('and' , '&'), ('a' , '@'),
          ('o' , '0'), ('i' , '1'))

def securePassword(password):
    for a,b in SECURE:
        password = password.replace(a, b)
    return password

if __name__ == "__main__":
    password = input("Enter your password\n")
    password = securePassword(password)
    print(f"Your secure password = {password}")

