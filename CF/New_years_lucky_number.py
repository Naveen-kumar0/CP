#https://codeforces.com/contest/110/problem/A
n=int(input())
n=str(n)
f=0
c=0
for i in n:
    if i=='4' or  i=='7':
        c+=1
for i in str(c):
    if i!='4' and i!='7':
        f=1
        break
if f:
    print("NO")
else:
    print("YES")