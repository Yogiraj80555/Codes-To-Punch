n = 6  #input()
l1 = "6 12 8 10 20 16" #input()
l2 = "5 4 3 2 1 5" #input()
l1 = list(map(int,l1.split()))
l2 = list(map(int,l2.split()))
for i in range(len(l1)):
	for j in range(l2[i]-1):
		l1.append(l1[i])
l1.sort()




l = len(l1)//2

#print(l1[:l],len(l1[:l]))
#print(l1[l:])





def function(l):
	if len(l)%2 == 0:
		mid = len(l)//2
		return (l[mid]+l[mid-1])/2
	else:
		mid = len(l)//2
		return l[mid]

def fun(size):
	
	#if int(size)%2 == 0:
	mid = len(l1[:size])//2;
	Q1 = (l1[mid]+l1[mid-1])/2
	mid = len(l1[size:])//2
	Q3 = l1[size+mid]
	return Q3-Q1; 


print(function(l1[l:]) - function(l1[:l])) #
print(fun(len(l1[l:])))