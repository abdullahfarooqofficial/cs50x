# Logical operators
#  write or in place of ||
from cs50 import get_string

# Prompt user to agree
s = get_string("Do you agree? ")

# Check whether agreed
if s == "Y" or s == "y":
    print("Agreed.")
else:
    print("Not agreed.")
