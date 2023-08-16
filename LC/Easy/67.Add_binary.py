class Solution(object):
    def addBinary(self, a, b):
        i=len(a)-1
        a1=0
        j=0
        while i>=0:
            if a[i]=='1':
                a1+=2**j
            j+=1
            i-=1
        i=len(b)-1
        j=0
        b1=0
        while i>=0:
            if b[i]=="1":
                b1+=2**j
            j+=1
            i-=1
        temp=""
        ans=a1+b1
        x=0
        if ans==0:
            return "0"
        while ans>0 :
            x=ans % 2
            temp+=str(x)
            ans=ans//2
        return temp[::-1]

print(Solution().addBinary("0","0"))