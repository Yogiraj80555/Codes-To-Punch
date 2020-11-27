



def is_valid_IP(strng):
    str = strng.split('.')
    if len(str) != 4:
        return 0;
    for i in str:
        if i.startswith('0') and len(i) > 1 or ' ' in i: return 0;
        try:
            if int(i) > 255 or int(i)<0 :
                return 0;
        except:
            return 0;
    return 1;








###

def is_valid_IP(strng):
  lst = strng.split('.')
  passed = 0
  for sect in lst:
    if sect.isdigit():
      if sect[0] != '0':
        if 0 < int(sect) <= 255:
          passed += 1
  return passed == 4



def is_valid_IP(s):
    return s.count('.')==3 and all(o.isdigit() and 0<=int(o)<=255 and str(int(o))==o for o in s.split('.'))

###