#  Write a Python program to get the Fibonacci series of given range.

num = int(input("enter a number: "))

a = 0
b = 1

if a==1:
    print(a)

else:
    print(a)
    print(b)
    for i in range(1,num+1):
        c = a+b
        a = b
        b = c
        print(c)
