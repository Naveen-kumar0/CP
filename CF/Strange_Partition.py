import math
t=int(input())
for _ in range(t):
    [n,x]=list(map(int,(input().split())))
    arr=list(map(int,input().split()))
    ans=int(math.ceil(sum(arr)/x))
    f=0
    maxx=0
    for i in arr:
        maxx+=int(math.ceil(i/x))
    print(ans,maxx)
