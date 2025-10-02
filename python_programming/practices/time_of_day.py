# MA 6th time of day

import datetime

current = datetime.datetime.now()
hour = current.hour
print(f"The time is: {current}")
print(f"hour is: {hour}")


if hour >= 1 and hour <= 11:
    print("Good Morning!")
elif hour >= 12 and hour <= 16:
    print("Good Afternoon!")
else:
    if hour >= 17 and hour <= 24:
        print("Good Evening!")