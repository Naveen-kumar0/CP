t=int(input())
for _ in range(t):
    n=int(input())
    if n%2==1:
        print(1,((n-1)//2),((n-1)/2))
    else:
        print(1,1,n-2)
