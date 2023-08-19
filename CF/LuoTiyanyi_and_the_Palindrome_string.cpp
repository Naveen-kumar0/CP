#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		string s;
		cin>>s;
		int f=0,c=0;
		int j=s.length()-1;
		for(int i=0;i<s.length()-1;i++)
		{
			if(s[i]!=s[i+1])
			c=1;
		}
		for(int i=0;i<(s.length()/2)-1;i++)
		{
			if(s[i]!=s[j])
			{
				f=1;
				break;
			}
			j--;
		}
		if(f==1 || c==0)
		cout<<"-1"<<endl;
		else
		cout<<s.length()-1<<endl;
	}
}
