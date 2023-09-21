#https://codeforces.com/contest/1873/problem/C
for _ in range(int(input())):
    a=[]
    for i in range(10):
        z=input()
        z=list(z)
        a.append(z)
    l,m,n=0,0,0
    o=0
    p=0

    for i in range(len(a[0])):
        if a[0][i]=='X':
            l+=1
        if a[9][i]=='X':
            l+=1
    for i in range(1,9):
        if a[i][9]=='X':
            l+=1
        if a[i][0]=='X':
            l+=1
    
    for i in range(1,9):
        if a[1][i]=='X':
            m+=1
        if a[8][i]=='X':
            m+=1
    for i in range(2,8):
        if a[i][8]=='X':
            m+=1
        if a[i][1]=='X':
            m+=1
    m=m*2


    for i in range (2,8):
        if a[2][i]=='X':
            n+=1
        if a[7][i]=='X':
            n+=1
    for i in range(3,7):
        if a[i][7]=='X':
            n+=1
        if a[i][2]=='X':
            n+=1
    n*=3

    for i in range(3,7):
        if a[3][i]=='X':
            o+=1
        if a[6][i]=='X':
            o+=1
    for i in range(4,6):
        if a[i][6]=='X':
            o+=1
        if a[i][3]=='X':
            o+=1
    o=o*4

    for i in range(4,6):
        if a[4][i]=='X':
            p+=1
        if a[5][i]=='X':
            p+=1
    for i in range(5,5):
        if a[i][5]=='X':
            p+=1
        if a[i][4]=='X':
            p+=1
    p=p*5
    print(l+m+n+o+p)        
    
