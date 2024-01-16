# separated by a space and swap the first two characters of each string.

a = input("enter a string: ")

b = input("enter a string: ")

output = b[:2] + a[2:] + " " + a[:2] + b[2:]

print(output)