//https://codeforces.com/contest/746/problem/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s,ans="";
	cin>>s;
	int ind=0,f=0,temp=s.length()-1;
	if(s.length()%2==1)
	{
		ans=s[0];
		for(int i=1;i<s.length();i+=2)
		{
			ans=s[i]+ans;
		}
		for(int i=2;i<s.length();i+=2)
		{
			ans+=s[i];
		}
		cout<<ans<<endl;
	}
	else
	{
		ans=s[0];
		for(int i=1;i<s.length();i+=2)
		ans+=s[i];
		for(int i=2;i<s.length();i+=2)
		ans=s[i]+ans;
		cout<<ans<<endl;
	}
}
