#https://codeforces.com/contest/1873/problem/A
for _ in range(int(input())):
    s=input()
    if s=="abc":
        print("YES")
        continue
    c=0
    if s[0]!='a':
        c+=1
    if s[1]!='b':
        c+=1
    if s[2]!='c':
        c+=1
    if c<=2:
        print("YES")
    else:
        print("NO")
