t=int(input())
for _ in range(t):
    n=int(input())
    arr=list(map(int,input().split()))
    arr.sort()
    ans=1
    for i in range(1,n):
        if arr[i]==arr[i-1]:
            continue
        ans+=1
    print(ans)