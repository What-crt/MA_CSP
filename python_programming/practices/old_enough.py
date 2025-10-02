# MA 6th old enough  

age = int(input("What is your age?"))

if age >= 18:
    print("You are old enough to vote!")
elif age >= 16:
    print("You are old enough to drive!")
elif age == 15:
    print("You are old enough to get a learners permit!")
else:
    if age >= 4:
        print("You are old enough to go to school!")
