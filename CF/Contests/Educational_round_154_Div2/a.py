t=int(input())
for i in range(t):
    s=input()
    j=0
    temp=0
    f=0
    for i in range(len(s)):
        for j in range(i+1,len(s)):
            #print(temp)
            temp=int(s[i]+s[j])
            f=0
            for k in range(2,temp):
                if temp%k==0:
                    f=1
            if f==0:
                print(temp)
                break
        if f==0:
            break
    