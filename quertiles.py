l = "3 7 8 5 12 14 21 13 18"
l=list(map(int,l.split()))

l.sort()
print(l,"\n")



def function(l):
	mid = 0;
	if len(l)%2 == 0:
		x= len(l)//2;
		mid = (l[x]+l[x-1])//2
		print(mid,l[x]);
		return mid,x,x;
	else:
		x = len(l)//2;
		return l[x],x,x+1;

Q2,end,start = function(l);
print("next\n\n")
Q1,e1,s1 = function(l[:end])
Q3,e1,s1 = function(l[start:])
print(Q1," ",Q2," ",Q3)
