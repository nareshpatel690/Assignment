#  Write a Python program to get the Factorial number of given number


num =int(input("enter a number: "))

fac=1

for i in range(1,num+1):
    fac=fac*i
print(fac)