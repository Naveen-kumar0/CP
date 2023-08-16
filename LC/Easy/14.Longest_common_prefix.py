
class Solution(object):
    def longestCommonPrefix(self, strs):
        st=[]
        temp=""
        strs.sort(key=len)
        t=strs[0]
        for i in range(len(t)):
            f=0
            st.append(t[i])
            for j in range(1,len(strs)):
                if(strs[j][i]!=st[-1]):
                    f=1
                    break
            if f==1:
                st.pop(i)
                break
        return temp.join(st)
n=int(input("en"))
strs=[]
for i in range(n):
    temp=input()
    strs.append(temp)
print(Solution().longestCommonPrefix(strs))