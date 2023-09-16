t=int(input())
for _ in range(t):
    n=int(input())
    arr=list(map(int,input().split()))
    arr.sort()
    d={}
    f=0
    for i in arr:
        if i in d.keys():
            d[i]+=1
        else:
            d[i]=1
    for i,j in d.items():
        if j>1:
            f=1
            break
    if f==1:
        print("NO")
    else:
        print("YES")