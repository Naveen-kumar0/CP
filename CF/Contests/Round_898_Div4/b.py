#https://codeforces.com/contest/1873/problem/B
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    a.sort()
    a[0]+=1
    i=0
    ans=1
    for i in a:
        ans=ans*i
    print(ans)