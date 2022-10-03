celsius = (input("Enter the temperature in celsius : "))
#force user to input only numbers
try:
  print(float(int(celsius))
except ValueError:
  print("Please enter a number")
fahrenheit = (celsius * 1.8) + 32
print('{} degree Celsius is equal to {} degree Fahrenheit' .format(celsius,fahrenheit))
