n=int(input())
for i in range(n):
    s=input()
    temp=""
    if len(s)<=10:
        print(s)
    else:
        temp+=s[0]
        x=len(s)-2
        temp+=str(x)
        temp+=s[-1]
        print(temp)