# MA 6th fincancial calculator

print("What is your monthly income:")
monthly_income = input()
print("what is your monthly rent?")
monthlyRent = input()
print("What is your monthly utilities:")
monthlyUtilities = input()
print("What is your monthly groceries:")
monthlyGroceries = input()
print("What is your monthly transportation:")
monthlyTransportation = input()

rentPercent = int(monthlyRent)/int(monthly_income) * 100
print("Your rent is $", monthlyRent, "and that is", str(rentPercent), "% of your income.")

utilitiesPercent = int(monthlyUtilities)/int(monthly_income) * 100
print("Your ulilities is $", monthlyUtilities, "and that is", str(utilitiesPercent), "% of your income.")

groceriePercent = int(monthlyGroceries)/int(monthly_income) * 100
print("Your groceries are $", monthlyGroceries, "and that is", str(groceriePercent), "% of your income.")

transportationPercent = int(monthlyTransportation)/int(monthly_income) * 100
print("your transportation is $", monthlyTransportation, "and that is", str(transportationPercent), "% of your income.")

savings = int(monthly_income) * 0.1
print("you should save $", str(savings), "a month, that is 10% of you income.")

spendingMoney = int(monthly_income) - (int(monthlyRent) + int(monthlyUtilities) + int(monthlyGroceries) + int(monthlyTransportation) + savings)
print("you have $", str(spendingMoney), "of spending money each month!")