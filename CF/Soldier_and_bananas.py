#https://codeforces.com/problemset/problem/546/A
[k,n,w]=list(map(int,input().split(" ")))
ans=0
sum=0
pro=k
for i in range(1,w+1):
    pro=k*i
    sum+=pro
if sum-n<0:
    print(0)
else:
    print(sum-n)