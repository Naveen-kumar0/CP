class Solution(object):
    def plusOne(self, digits):
        s=0
        for i in digits:
            s=(s*10)+(ord(str(i))-48)
        s+=1
        t=str(s)
        temp=[]
        for i in t:
            temp.append(ord(i)-48)
        return temp
print(Solution().plusOne([4,3,2,1]))
