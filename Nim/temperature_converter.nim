import std/strutils
import strformat

stdout.write "\nEnter Temperature (Without Unit): "
var temp = readLine(stdin).parseFloat()

stdout.write "Unit of Temperature (F, C, K) 'Capital only': "

var u = readLine(stdin);


if u == "K" :
    var c :float = temp - 273.15
    var f :float = 1.8*(temp-273)+32
    echo fmt"{temp} {u} is {c:.3f} C"
    echo fmt"{f:.3f} F "
elif u == "C":
    var f :float = (temp*1.8)+32
    var k :float = temp + 273.15
    echo fmt"{temp} {u} is {f:.3f} F"
    echo fmt"{k:.3f} K "

elif u == "F":
    var c :float = (temp-32)/1.8
    var k = ((temp-32)*5/9)+273.15
    echo fmt"{temp} {u} is {c:.3f} C"
    echo fmt"{k:.3f} K "

    
else:
    echo "Only K C or F"
    quit()
