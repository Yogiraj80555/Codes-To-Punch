n = int(input())
if len(n) != 10:
	print("Invalid")
for i in range(n):
    srt = input();
    val = set(i for i in srt)
    if len(val) == 10:
    	pass;
    	numbers = sum(i.isdigit() for i in srt)
    	upperCase = sum(i.isupper() for i in srt)
    	alpha = sum(i.isalpha() for i in srt)
    	if numbers > 2 and upperCase > 1 and (alpha+numbers) == len(srt):
    		print("Valid")
    	else: print("Invalid")


    else: print("Invalid")
