t=int(input())
for _ in range(t):
    n=int(input())
    s=input()
    s=list(s)
    ans="Timru"
    s.sort(key=ord)
    if "".join(s)==ans:
        print("YES")
    else:
        print("NO")