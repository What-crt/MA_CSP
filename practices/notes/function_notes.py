# MA 6th function notes

import random 

#What a function is
    #set of instructions that are called on to do something with a key word. We can make your own function so you can repeat things without rewriting things over and over. you need to indent and you  can not put a space before you write!

def welcome():
    name = input("what is your name?")
    print(f"Hello {name}!")

print(f"The function is over")

welcome()
welcome()
welcome()
welcome()

#Why we use functions
    #So we dont have to rewrite a code over and over again expecially when we want to write a lot of code. 

#How to write a function in Python
    # We habe things like input and 
def color():
    fav_color = input("what is your favorite color?")
    print(f"{fav_color}! Thats awesome!")

print(f"The function is over") 

color()
color()
color()

#What parameters and arguments are
    # a parameter is given we define a function. and arguments are when we call the function.

#How to use parameters and arguments in python
    # so you dont have to rewrite the code just call the function 
def add(number): #parameter
    number = num_one + num_two
    print(number)

num_one = 12
num_two = 14
add(num_one) # argument
add(4)
add(9)
add(87)

#What return statements are
    # Its when you call a function you can set it equal variable. It jumps back to another place.

#How to use return statements in a program
def clean(info):
    return info.strip().lower()

name = input("What is your name?")
quest = input("what is your quest?")
fav_color = input("What is your favorite color?")

print(f"Hello, {clean(name)}. I have heard your trying to {clean(quest)}, that is super cool! Are you sure {clean(fav_color)} is your favorite color?")


def believe(sentence):
    length = len(sentence)
    spot_one = random.randint(0, length -1)
    spot_two = random.randint(0, length -1)
    spot_three = random.randint(0, length -1)
    full_sentence = sentence.split(" ")
    full_sentence.insert(spot_one, "Believe it!")
    full_sentence.insert(spot_two, "Believe it!")
    full_sentence.insert(spot_three, "Believe it!")
    sentence = "".join("")
    return sentence 

new_sentence = believe("The quick brown fox jumps over the lazy dog!")
print(new_sentence)
