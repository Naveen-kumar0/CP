#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	
    string longestCommonPrefix(vector<string>& strs) {
    	//sort(strs.begin(),strs.end,cmp);
    	string t=strs[0],ans="";
    	vector<char> st;
    	int f=0;
        for(int i=0;i<strs[0].length();i++)
        {
        	f=0;
        	st.push_back(t[i]);
        	for(int j=1;j<strs.size();j++)
        	{
        		if(strs[j][i]!=st.back())
        		{
        			f=1;
        			break;
				}
			}
			if(f==1)
			{
				st.pop();
				break;
			}
		}
		while(!st.empty())
		{
			char x=st.pop();
			ans+=x;
		}
		return ans;
    }
    
};
int main()
{
	int n;
	cin>>n;
	string temp;
	vector<string> strs;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		strs.push_back(temp);
	}
	Solution x;
	cout<<x.longestCommonPrefix(strs)<<endl;
	
}
