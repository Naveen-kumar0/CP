#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
    	int c=0;
		for(int i=s.length()-1;i>=0;i--)
		{
			if(s[i]==' ' && c>0)
			break;
			if(s[i]==' ')
			continue;
			c++;
		}   
		return c;
    }
};
int main()
{
	string s;
	getline(cin,s);
	cout<<Solution().lengthOfLastWord(s)<<endl;
}
