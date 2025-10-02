# MA 6th loop notes

#What is a loop? 
    #keep going until a specific condition is met.

import datetime
current = datetime.datetime.now()
hour = current.hour

print(f"The time is: {current}")
print(f"hour is: {hour}")

siblings = ["Tyler", "Kenyan", "Mykel", "Jack"]

print(siblings[2])
print(siblings)
siblings[0] = "Tc"
siblings.remove("Mykel")

    #For loops
for x in siblings:
    #print(f"Hello {x}")
    print("Hi!")

for x in range(1,6):
    print(x)
for x in range(20, -11, -1):
    print(x)
    # 20  start, -11 end, -1 count by.


#What are the two types of loops?
    #for loops and while loops. 
#while True:   #infinite loop
    #print("oh No!")    #infinte loops are bad!!!!!
    #1 iterator(keep track of loop #)
    #2 end condition(tells the loop to stop)
    #3 increase the iterator
#good while loop
i = 1

while i < 21:
    if i % 2 == 0:
        print(f"{i} is even.")
    else:
        print(f"{i} is odd.")
    i += 1

import random
number = random.randint(1,20)
x = 1
#while x != number:
   # print("Duck")
    #x += 1
#print("Goose!")


#What is iteration
    #it keeps track of how many times the loop has run.

#What are lists? 
    #complex data type. store multiple pieces of information in the same variable.

#How do you make lists in python? 
siblings = ["Tyler", "Kenyan", "Mykel", "Jack", ["Glenn", "Sam", "Eliza"], 5, 3.14]

#How do you make for loops in python? 
for x in siblings:
    #print(f"Hello {x}")
    print("Hi!")

for x in range(1,6):
    print(x)
for x in range(20, -11, -1):
    print(x)

#How do you make while loops in python?
    #while True:
    if number == x:
        print("Goose!")
        break  #breaks the loop 
    else:
        print("Duck")
        x += 1
