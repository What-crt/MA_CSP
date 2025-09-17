# MA 6th update financial calculator

def get_input(prompt):
    return float(input(prompt))

def calculate_percentage(income, expense):
    return (expense / income) * 100

monthly_income = get_input("What is your monthly income: ")
monthly_rent = get_input("What is your monthly rent? ")
monthly_utilities = get_input("What is your monthly utilities: ")
monthly_groceries = get_input("What is your monthly groceries: ")
monthly_transportation = get_input("What is your monthly transportation: ")

rent_percent = calculate_percentage(monthly_income, monthly_rent)
utilities_percent = calculate_percentage(monthly_income, monthly_utilities)
groceries_percent = calculate_percentage(monthly_income, monthly_groceries)
transportation_percent = calculate_percentage(monthly_income, monthly_transportation)

print(f"\nYour rent is ${monthly_rent:.2f}, which is {rent_percent:.2f}% of your income.")
print(f"Your utilities are ${monthly_utilities:.2f}, which is {utilities_percent:.2f}% of your income.")
print(f"Your groceries are ${monthly_groceries:.2f}, which is {groceries_percent:.2f}% of your income.")
print(f"Your transportation is ${monthly_transportation:.2f}, which is {transportation_percent:.2f}% of your income.")

savings = monthly_income * 0.10
spending_money = monthly_income - (
    monthly_rent + monthly_utilities + monthly_groceries + monthly_transportation + savings
)

print(f"\nYou should save ${savings:.2f} a month (10% of your income).")
print(f"You have ${spending_money:.2f} left for other spending.")
