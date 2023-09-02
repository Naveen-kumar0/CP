#https://codeforces.com/problemset/problem/1742/C
t=int(input())
for _ in range(t):
    z=input()
    temp=[]
    for i in range(8):
        s=input()
        temp.append(s)
    f=0
    for i in range(len(temp)):
        for j in range(8):
            if temp[i][j]=='R':
                f=0
                for k in range(8):
                    if temp[i][k]!='R':
                        f=1
                        break
                if f==0:
                    print("R")
                    f=1
                    break
                f=0
            elif temp[i][j]=='B':
                f=0
                for k in range(8):
                    #print(temp[k][j])
                    if temp[k][j]!='B':
                        f=1
                        break
                if f==0:
                    print('B')
                    f=1
                    break
                f=0
        if f==1:
            break
