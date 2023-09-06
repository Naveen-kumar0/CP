s=input()
h,l=0,0
for i in s:
    if ord(i) >=65 and ord(i) <91:
        h+=1
    else:
        l+=1
if h>l:
    print(s.upper())
else:
    print(s.lower())