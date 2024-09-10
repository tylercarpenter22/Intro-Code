#camelCase CS50 Problem Set 2

#Get Input
camel = input("camel case: ")
result = ""

#Convert camelCase to snake_case
for char in camel:
    if char.isupper():
        result += '_' + char.lower()
    else:
        result += char

print(f"snake case: {result}")