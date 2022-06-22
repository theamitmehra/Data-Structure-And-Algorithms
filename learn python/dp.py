# using dp 

# def fibonacci(n):
#     f = [0, 1]
    
#     for i in range (2, n +1):
#         f.append(f[i -1] + f[i -2])
    
#     return f[n]

# print(fibonacci(9))


# using recursion 
# from hashlib import new

# from pip import main


# def fibonacci(n , second_last, last):
#     if(n-1)== 0:
#         return second_last
#     else:
#         new_last = second_last+last
#         second_last = last
#         return fibonacci(n-1, second_last, new_last)

# if __name__ == "__main__":
#     print(fibonacci(10, 0, 1))


def fibonacci(n):
    a = 0
    b = 1

    if n< 0:
        print("incorect input")
    elif n == 0:
        return a
    elif n == 1:
        return b

    else:
        for i in range( 2, n +1):
            c = a + b
            a = b
            b = c
        return b

# driver mode 

print(fibonacci(10))

