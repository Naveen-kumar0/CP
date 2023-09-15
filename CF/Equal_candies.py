t=int(input())
for _ in range(t):
    n=int(input())
    arr=list(map(int,input().split()))
    arr.sort()
    ans=0
    for i in range(1,len(arr)):
        ans+=arr[i]-arr[0]
    print(ans)