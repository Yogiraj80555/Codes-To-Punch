p = 0.333
q = 1 - p
g = 0.0;
n=5
for i in range(1,n+1):
    x= i-1
    g += q**(i-1) * p;
    print(q**x,"   ",x)
print("{:.3f}".format(g))