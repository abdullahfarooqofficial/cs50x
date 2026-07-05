# for i in range(3):
#     print("hello Bro")

# # Demonstrates while loop

# i = 0
# while i < 3:
#     print("heloo")
#     i += 1


# Uppercases string one character at a time
# in this we chng it one by one
before = input("Before: ")
print("After:  ", end="")
for c in before:
    print(c.upper(), end="")
print()

# in this we use function at all
before = input("Name: ")
after = before.upper()
print(f"Hello, {after}")
