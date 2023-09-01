n=input()
i=len(n)-1
f=0
ans=0
while i>=0:
    if n[i]=='4':
        if i==0:
            f=1
            break
        if i>=2:
            if n[i-1]=='4':
                if n[i-2]!='1':
                    f=1
                    break
            elif n[i-1]!='1':
                f=1
                break
        elif i>=1:
            if n[i-1]!='1':
                f=1
                break
    elif n[i]!='1':
        f=1
        break
    i-=1
if f==1:
    print("NO")
else:
    print("YES")