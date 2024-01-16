#  Write a Python program to count the number of characters (character
# frequency) in a string

str1 = input("enter a string: ")

str1 = str1.split()
str2=[]
count=[]

for i in str1:
    if i  not in str2:
        str2.append(i)
        count.append(1)
else:
    index = str2.index(i)
    count[index] = count[index] + 1

print(str2)
print(count)

