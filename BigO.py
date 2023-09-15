# O(n^2)

def print_item1(n):
    for i in range(n): # O(n)1 -> O(n)
        for j in range(n): # O(n)2 -> O(n^2)
            for k in range(n): #O(n)3 -> O(n^3)
                print(i,j,k)

# n * n * n = n^3
# n * n = n^2

#print_item(10)

# in genaral we denote O(n^2)


# Drop non-Dominants
def print_item2(n):
    for i in range(n):        # O(n^2)
        for j in range(n):
            print(i,j)           
    
    for i in range(n):        # O(n)
        print(i)
    
    # O(n^2)+O(n) = O(n^2 + n) => O(n^2)
#print_item2(10)

# O(1)

def print_item3(n):
    return n+n+n  # => O(n)
#print(print_item3(5))

# O(log n)

# 1 2 3 4 5 6 7 8    => find 1
# 1 2 3 4            => 1 < 5 search in half of the list
# 1 2                => 1 < 3 
# 1 
# find the 1 in 3 step which is 2^3 = 8
# log2  8 = 3


# different terms for input
def print_item4(a,b):
    for i in range(a):
        print(i)
    for j in range(b):
        print(j)
    
    # a != b => O(a+b)   not O(2n)
def print_item5(a,b):
    for i in range(a):
        for j in range(b):
            print(i,j)
    # a != b => O(a*b)   not O(n^2)

# print_item4(5,10)
# print_item5(5,10)



# Big O
# n = 100

# O(1) = 1 => Constant

# O(log n) = 7 => Divide and Conquer

# O(n) = 100 => Propotional

# O(n^2) = 10,000 = Loop within a Loop

# Big-O-Cheat-Sheet
# https://www.bigocheatsheet.com/



