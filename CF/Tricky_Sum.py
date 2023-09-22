#https://codeforces.com/problemset/problem/598/A
for _ in range(int(input())):
    n=int(input())
    ans=n*(n+1)//2
    for i in range((n//2)+1):
        temp=2**i
        if temp<=n:
            ans-=(2*temp)
        else:
            break
    print(ans)