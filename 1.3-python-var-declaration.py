# This is a single line comment
""" 
This is a multi line comment 
"""

"""
    Creating Variables
        Python has no command for declaring a variable. 

        A variable is created the moment you first assign a value to it.
"""

x = 15
y = 10

if x > y:
    print("x is greater than y")
else:
    print("y is greater than x")

b = "Hello, World!"
# print(b[2:5])

# b = "Hello, World!"
print(b[-5:-2])
print(b[-5:2])

print(bool("Hello"))
print(bool(""))
print(bool(15))

mylist = ["apple", "banana", "cherry"]
print(type(mylist))

thislist = list(("apple", "banana", "cherry"))  # note the double round-brackets
print(thislist)

thislist2 = ["apple", "banana", "cherry"]
thislist2.insert(2, "watermelon")
thislist2.insert(4, "last_fruit")
print(thislist2)

thislist3 = ["apple", "banana", "cherry"]
thislist3.append("orange")
print(thislist3)

thislist4 = ["apple", "banana", "cherry"]
thistuple = ("kiwi", "orange")
thislist4.extend(thistuple)
print(thislist4)

x1 = lambda a1: a1 + 10
print(x1(5))
