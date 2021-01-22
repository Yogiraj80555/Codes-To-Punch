lst = [['Harry', 37.21], ['Berry', 37.21], ['Tina', 37.20], ['Akriti', 41], ['Harsh', 39]]
lst.sort(key=lambda x: x[1])
print(lst)
i = 0;
small = lst[0][1]
l = 1
name = []
current = 0
while(l < len(lst)):
	if(lst[l][1] > lst[l-1][1]) and current == 0:
		current = lst[l][1]
		name.append(lst[l][0])
		
	elif(lst[l][1] == current):
		name.append(lst[l][0])
	
	l += 1
name.sort()
for i in name:
	print(i)
