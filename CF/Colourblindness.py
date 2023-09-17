#https://codeforces.com/contest/1722/problem/B
t=int(input())
for _ in range(t):
    n=int(input())
    s1=input()
    s2=input()
    f=0
    for i in range(n):
        if s1[i]!=s2[i]:
            if s1[i]!='G' and s1[i]!='B':
                f=1 
                break
            if s2[i]!='G' and s2[i]!='B':
                f=1
                break
    if f==0:
        print("YES")
    else:
        print("NO")