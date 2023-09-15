# Pointer

# integer => immuteable
num1 = 11
num2 = num1   # num2 pointing to the num 1 addres (num2 => num1) 

# print(num1)
# print(num2)
# print("\nBefor")
# print("num1 =",id(num1))
# print("num2 =",id(num2))

# num2 = 22
# print()
# print(num1)
# print(num2)
# print("\nAfter")
# print("num1 =",id(num1))
# print("num2 =",id(num2))



# in Dectionary => muteable

dict1 = {"value":11}
dict2 = dict1

print("\nBefore")
print("dict1:",dict1)
print("dict2:",dict2)
print("dict1:",id(dict1))
print("dict2:",id(dict2))

dict2["value"] = 55

print("\nAfter")
print("dict1:",dict1)
print("dict2:",dict2)
print("dict1:",id(dict1))
print("dict2:",id(dict2))

dict3 = {"value":13}
dict2 = dict3
dict1 = dict2

print("\nAfter that")
print("dict1:",dict1)
print("dict2:",dict2)
print("dict2:",dict3)
print("dict1:",id(dict1))
print("dict2:",id(dict2))
print("dict2:",id(dict3))