#  Write a Python program to sum of three given integers. However, if
# two values are equal sum will be zero.

a = int(input("enter number: "))
b = int(input("enter number: "))
c = int(input("enter number: "))

if a==b or b==c or c==a:
    print("sum is zero")
else:
    print("sum of given integer: ",a+b+c)