#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
    	int f=0;
    	bool flag=false;
        for(int i=0;i<haystack.length();i++)
        {
        	for(int j=0;j<needle.length();j++)
        	{
        		f=0;
        		if(haystack[i+j]!=needle[j])
				{
					f=1;
					break;
				}		
			}
			if(f==0)
				return i;
		}	
		return -1;
    }
};
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	cout<<Solution().strStr(s1,s2)<<endl;
}

