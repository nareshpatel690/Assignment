# Write python program that swap two number with temp variable and
# without temp variable

a = int(input("before swap value of a: "))
b = int(input("enter swap value of b: "))

c = a
a = b
b = c

print("value of a after swap:",a)
print("value of b after swap:",b)
