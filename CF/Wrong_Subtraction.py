[n,k]=list(map(int,input().split()))
for i in range(k):
    if n%10==0:
        n/=10
    else:
        n-=1
if n<0:
    print(0)
else:
    print(int(n))