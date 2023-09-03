t=int(input())
for _ in range(t):  
    [n,h,m]=list(map(int,input().split(" ")))
    arr=[]
    for i in range(n):
        h1,m1=list(map(int,input().split(" ")))
        arr.append(h1)
        arr.append(m1)
    j=0
    minh=24
    minm=60
    th,tm=0,0
    while j < len(arr)-1:
        th,tm=0,0
        if arr[j]>=h:
            if m>0:
                tm=60-m
                h+=1
            th=arr[j]-h
            tm+=arr[j+1]
            if tm>60:
                tm-=60
                th+=1
            minh=min(th,minh)
            if minh==th:
                minm=tm
            if m>0:
                h-=1
        else:
            if m>0:
                tm=60-m
                h+=1
            th=24-h
            th+=arr[j]
            tm+=arr[j+1]
            if tm>60:
                tm-=60
                th+=1
            minh=min(th,minh)
            if minh==th:
                minm=tm
            if m>0:
                h-=1
        j+=2
    print(minh,minm)
    