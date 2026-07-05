# Logical operators, using lists
# when we take input it becomes lower
# Prompt user to agree
s = input("Do you agree? ").lower()

# Check whether agreed
if s in ["y", "yes"]:
    print("Agreed.")
else:
    print("Not agreed.")
