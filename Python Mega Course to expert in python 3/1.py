# it will print new line after the messages
print("Hello")
print("World")

# it will print new line
print()

# it will print new line after printing "Hello"
print("Hello",end="\n")
# it willprint new line after printing "World"
print("World")

# it will print new line 
print()

# it will not print new line after printing "Hello"
# it will print space " "
print("Hello",end=" ")
# it will print new line after printing "World"
print("Worlds")
a=b=c=d=10
print(a,b,c,d)
a,b,c,d = 10,252,2.5,"Python"
print(a,b,c,d)
x = "Data"
y = "base"
print(x,y)
print("Swaping Values in 1 Line")
x,y=y,x
print(x,y)
assert 4+4==8
#assert 4*3==8 #here assert fails so it return assert error
def add(a,b):
	return a*b
assert add(1,3) == 3 #if condition true it will not affect on output
name="Python"
name1="Programming"
tmp = "{name} is the {names} Language for Scripting"
t = tmp.format(name=name,names=name1)
print(t)
print(len(t))

data = """ this is
data base 
"""
print(len(data))


print (10//3)

print (5+3)

print (10*3)



#Print (23/5)

print (20/2)

data = "helpo"
print(data[1:3])

#String Format
var = "For Only In {price:2f} Dollars {day}"
print(var.format(day="Wednesday",price=100))
print(" %s" %data[-4])
var = max("python")
print(var)