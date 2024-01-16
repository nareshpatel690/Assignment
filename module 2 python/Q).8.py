#  Write a Python program to test whether a passed letter is a vowel or
# not.


l = input("enter a letter:").lower()


str = "aeiouAEIOU"

for i in str:
    if i == l:
        print("Vowel")