t=int(input())
for i in range(t):
    s1=input()
    s2=input()
    if s1==s2:
        print("YES")
        continue
    c=0
    ans=0
    j=1
    temp=-1
    while j<(len(s1)-1):
        if s1[j]!=s2[j]:
            if s1[j-1]==s2[j+1] or s2[j-1]==s2[j+1]:
                ans+=1
            c+=1
        j+=1
    print(ans,c)
    if(ans==c):
        print("YES")
    else:
        print("NO")