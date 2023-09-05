#https://codeforces.com/contest/469/problem/A
n=int(input())
a=list(map(int,input().split(" ")))
p=a[0]
a.remove(a[0])
b=list(map(int,input().split(" ")))
q=b[0]
b.remove(b[0])
for i in b:
    a.append(i)
if len(set(a))==n:
    print("I become the guy.")
else:
    print("Oh, my keyboard!")