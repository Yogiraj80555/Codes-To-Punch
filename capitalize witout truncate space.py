def solve(s):
    i=1;
    s1=""
    if s[0].isalpha():
        s1 +=s[0].upper()
    else:
        s1 += s[0];
    while len(s)> i:
        if s[i-1] == " " and s[i].isalpha():
            s1 += s[i].upper()
        else:
            s1 += s[i];
        i = i+1

        
    print(s1)  
   
    

solve("hello   world  lol 3g")