n=int(input())
s1="I hate that"
s2="I love that"
if n % 2==0:
    for i in range(1,n):
        if i % 2==1:
            print(s1,end=" ")
        else:
            print(s2,end=" ")
    print("I love it")
else:
    for i in range(1,n):
        if i % 2==1:
            print(s1,end=" ")
        else:
            print(s2,end=" ")
    print("I hate it")