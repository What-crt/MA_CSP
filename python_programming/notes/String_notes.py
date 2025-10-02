# MA 6th string notes

print("I did it!")

#1.What makes something a string?
#a collection of symbols held together by quotation marks, numbers and letters. 
"content of string"
'this is also a string'
#quotation marks on any side have to match. every input has a string assosiated with it. 
#EXAMPLES:
first_name = input("what is your first name?").strip().title()

Last_name = input("what is your last name?").strip().title()

full_name = first_name + " " + Last_name

sentence = "the quick brown fox jumps over the lazy dog."

print("welcome to my program", full_name +"!")
print(sentence.find("brown"))
print(sentence [10:15])
#2.Why do we have strings?
    # strings are for when we to work with words, names, and sentences. They hold our text data. Any string needs "" around it.
    #They can ask questions to our users and show messages.
print("this is a message that I am showing a user using a string.")

#3.How do stupid proofing and sanitization relate to each other?
    # Stupid proofing is when you protecting your program from input you dont want. like  when you want a number and they type 11.
    #Sanitization is when you format basically. you can do this with .strip() .lower() and .upper()
    #They both work toghether, stupid proofing blocks the input you dont want and sanitization fixes the input. So they both relate to input

#4.What is debugging?
 # debugging is fixing promblems in my code. a bug is any eror in your code that keeps it from running or working inproperly 
    # syntax error- misspelling a variable. Doing a print statment with no , or +. below was two diffrent types of "" marks = ' ""
string ='This is a fixed syntax error'
 # Logic error
numOne = "1"
numTwo = "3"
print("1+3=", numOne + numTwo)
 # Run-Time error
    # a prmblem in the code that will break the code when it runs. 
letter = "a"
int(letter)
#5.How do you debug the different types of errors?
    #-for syntax the system wont run until you fix the mistake, typo, missing parenthesis, etc. 
    #-for Logic errors it will give you wrong results. With this you will have to test by checking your formulas and testing diffent inputs.
    #-for Run-time it breaks your code when it runs You will fix this by checking the line number it breaks on and adding checks to make sure the input is valid.

#6.Describe what each of the methods below does:
#A. find()
    #This will find what you tell it to find. it then counts the spaces, letters, and puncuation to tell you where it is. below is in the 6th space.
sentence = "hello world"
print(sentence.find("world"))

#B. concatenate (add)
    # It joins two strings together. you use plus sign+ in between the two strings. 
greeting = "Hello" + " " + "world"

#C. upper()
    #changes all the letters in a string to uppercase. so if someone typed their name: tyler,  then it would change to TYLER. If you put title then it would only change the first letter to uppercase.
print("hello".upper())

#D. lower()
    #changes all the letters in a string to lowercase. if someone typed their name: TYLER, then it would change to tyler
print("HELLO".lower())

#E. strip()
    #removes any extra spaces but only before and after the string. So if someone wrote   "          Tyler        "      it changes it to "Tyler"
word = "   hello   "
print(word.strip()) 
