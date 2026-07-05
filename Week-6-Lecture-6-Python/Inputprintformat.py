
from cs50 import get_string
answer = get_string("What's ur name? ")

# get_string and print, with concatenation
print("hello, " +answer)
# get_string and print, without concatenation addition of (,)
print("hello,", answer)
# get_string and print, with format strings
print(f"hello, {answer}")
