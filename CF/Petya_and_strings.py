s1=input()
s2=input()
t1=[]
t2=[]
s1=s1.lower()
s2=s2.lower()
for j in s1:
    t1.append(ord(j))
for k in s2:
    t2.append(ord(k))
f=0
for i in range(len(s1)):
    if t1[i] > t2[i]:
        f=1
        print(1)
        break
    elif t1[i] < t2[i]:
        f=1
        print(-1)
        break
if f==0:
    print(0)