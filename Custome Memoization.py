

# Enter your code here. Read input from STDIN. Print output to STDOUT
#in this problem  x=3 n=6 i.e. p=3/6=0.5 and q = 3/6=0.5 
#as per formula b(x,n,p)



# Enter your code here. Read input from STDIN. Print output to STDOUT
a = "12 10"
a = a.split()
n = int(a[1])
p = int(a[0])/100
q = 1 - p

import math
def function(x):
    nfact = math.factorial(n)
    nxfact = math.factorial(n-x)
    xfact = math.factorial(x)
    nfact /= nxfact
    nfact /= xfact
    p1 = p**x
    q1= q**(n-x)
    nfact = nfact *q1*p1
    return nfact

print("{:.3f}".format(function(1)+function(0)+function(2)))
print("{:.3f}".format(1-(function(1)+function(0))))


exit()













import math

x = 5
n = 10


def calculate_Single(x,n,p,q):
	
	nfact = math.factorial(n)
	xfact = math.factorial(x)
	xnfact = math.factorial(n-x)
	fact = nfact/xfact;
	fact = fact/xnfact;
	pandq = p**x  *  q**(n-x)
	fact *= pandq
	return fact;

def at_least(start,end):
	sums = 0;
	for i in range(start,end+1):
		print(i)
		sums += calculate_Single(i,n)
	return sums;


print(at_least(5,n))



exit()
def custom_memoization(f):
	memory = {}

	def inner(num):
		if num not in memory:
			memory[num] = f(num)
		return memory[num]
	return inner;

@custom_memoization
def factorial(n):
	if n == 1:
		return 1;
	else:
		return n * factorial(n-1)

print(factorial(200))