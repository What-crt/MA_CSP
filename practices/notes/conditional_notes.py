# MA 6th conditional notes  

#What puts something inside of the “if” statement?
    # conditional expression

#What do if statements do?
    #they check if something is true

num = 6
if num < 10:
    print(f"{num} is a single digit number")

#What are boolean statements? 
    # always be something that is true or false

     # num<10: is a boolean statement

#What do else statements do?
    # if it is not true then it gives the else statment. if this is true write this, else write this.
num = 12
if num < 10:
    print(f"{num} is a single digit number")

else:
    print(f"{num} is not a single digit number")

    # you can also use a if statment for this
    num = 18
if num < 10:
    print(f"{num} is a single digit number")
if num > 9:
    print(f"{num} is not a single digit number")


#What kind of statement do you use if you have more than 2 needed outcomes?
    # elif --- else if, this will get you multiple outcomes with out messing it up. 

name = input("What is your name?")

if name == "Ms LaRose":
    print("You are the teacher!")
elif name == "Tia":
    print("You are the TA!")
else:
    print(f"Hello {name}, Your are a student!")

#What do each of the different symbols mean in conditionals?
#<  -less than
#>  -greater than
#<= -less than or equal to
#>= -greater than or equal to
#== -(two because it would think we are setting a variable) equal
#!= -no equal to

#What are the 3 logical operators?
    #

#What are logical operators for?
    #

#What does a nested conditional statement do?
    #