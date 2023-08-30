t=int(input())
for i in range(t):
    n=int(input())
    arr=list(map(int,input().split()))
    arr.sort()
    arr.reverse()
    ans=0
    for j in range(len(arr)):
        if arr[j]%2==0:
            ans+=(len(arr)-1-j)
        else:
            for k in range(j+1,len(arr)):
                if 2 *arr[k]% arr[j]==0 and arr[j]!=1 and arr[k]!=1:
                    ans+=1
    print(ans)