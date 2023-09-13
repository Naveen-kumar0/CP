t=int(input())
for _ in range(t):
    [a1,a2,b1,b2]=list(map(int,input().split()))
    if a2>a1 or b2 > b1:
        print("YES")
    else:
        print("NO")