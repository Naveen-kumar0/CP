#https://codeforces.com/problemset/problem/1097/A
s=input()
s1=list(map(str,input().split()))
f=0
for i in s1:
    if s[0]==i[0]:
       f=1
       break
    elif s[1]==i[1]:
        f=1
        break
if f:
    print("YES")
else:
    print("NO")