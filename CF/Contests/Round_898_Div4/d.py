#https://codeforces.com/contest/1873/problem/D
for _ in range(int(input())):
    n,k=input().split(" ")
    n=int(n)
    k=int(k)
    s=input()
    f=0
    for i in s:
        if i=='B':
            f=1
            break
    if f==0:
        print(0)
        continue
    i=len(s)-1
    s=list(s)
    c=0
    while i >= k:
        if s[i]=='B':
            #print("ghghjhjh")
            #for j in range(i,i+k):
            s[i:i-k:-1]='W'*k
            c+=1
            i-=k
        else:
            i-=1
    #print(s)
    for z in range(k):
        if s[z]=='B':
            c+=1
            break

    print(c)
        
