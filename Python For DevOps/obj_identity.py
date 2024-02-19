a = 50
b=a
print(id(a))
print(id(b))
#reassigned variable a
a=500
print(id(a))
#a/c to my opinion it is address

#assign single value to multiple variable   
x=y=z=50
print(x)
print(y)
print(z)

#assign multiple values to multiple variable
a,b,c =5,10,15
