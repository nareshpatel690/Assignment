# Write a Python program to count occurrences of a substring in a string.

str1 = input("enter string: ")

str2 = input("enter word which you want to count: ")

str1 = str1.split()
count = 0
for i in str1:
    if i == str2:
        count = count + 1
print(count)