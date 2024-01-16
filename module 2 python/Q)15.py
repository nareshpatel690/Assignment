#  Write a Python program to count the occurrences of each word in a
# given sentence

str1 = input("enter string: ")

# str1 = "c c++ java python c++ c"

str1 = str1.split()

empty = []
count = []

for i in str1:
    if i not in empty:
        empty.append(i)
        count.append(1)
    else:
        index = empty.index(i)
        count[index] = count[index] + 1

print(empty)
print(count)
