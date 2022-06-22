import random
passlen = int(input("enter the length of password : "))
s= "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%^&*()?"
p ="".join(random.sample(s,passlen))
print(p)