def findSubstring(s, k):
	if k > len(s):
		return "Not found!";

	pair = 0;
	strs = ""
	ovl = ['a','e','i','o','u']
    i = 0;
    
    while( i < (len(s)-k)):
    	substr = s[i:i+k];
    	z = 0
    	for j in ovl:
    		z += sbustr.count(j)
    	if z > len(strs):
    		strs = substr;
    		i += 1
    	while i < (len(s)-k):
    		i +=1;
    		if s[i] in ovl:
    			break;
    if len(strs) == 0:
    	return "Not Found"
    return strs
