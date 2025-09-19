# MA 6th loop notes

#What is a loop? 

import datetime

current = datetime.datetime.now()
hour = current.hour

print(f"The time is: {current}")
print(f"hour is: {hour}")


#What are the two types of loops?
#What is iteration
#What are lists? 
    #complex data type. store multiple pieces of information in the same variable.
siblings = ["Tyler", "Kenyan", "Mykel", "Jack", ["Glenn", "Sam", "Eliza"], 5, 3.14]

#How do you make lists in python? 
#How do you make for loops in python? 
#How do you make while loops in python?




import time

epoch = time.time()
current = time.ctime(epoch)
local_time = time.localtime(current)
hour = local_time.tm_hour

print(f"the time in secounds since Jan 1, 1970: {epoch}")
print(f"The time is: {current}")
print(f"hour is: {hour}")
