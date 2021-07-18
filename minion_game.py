def minion_game(string):
    vowels = "AEIOU";
    kev = 0;
    stu = 0;
    for i in range(1,len(string)+1):
        for j in range(0,len(string)):
            if j+i > len(string):
                break;
            s = string[j:j+i]
            if len(s)>0 and s[0] in vowels:
                kev +=1;
            elif len(s)>0: 
                stu +=1;
            #print(s)
    if kev>stu:
        print("Kevin",kev);
    elif stu>kev:
        print("stuart",stu);
    else:
        print("Draw")


def minion_game1(string):
    vowels = "AEIOU"
    kev = 0;
    stu = 0;
    for i in range(len(string)):
        if string[i] in vowels:
            kev += (len(string)-i);
        else:
            stu += (len(string)-i)

    #print(kev, " ",stu)

    if kev>stu:
        print("Kevin",kev);
    elif stu>kev:
        print("stuart",stu);
    else:
        print("Draw")




minion_game("BANANANAAAS");

minion_game1("BANANANAAAS")
print('done')

"""

BANANA




"""