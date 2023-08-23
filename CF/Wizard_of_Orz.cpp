//https://codeforces.com/contest/1467/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,temp=989,f=0;
		cin>>n;
		string ans="989";
		if(n<3)
		{
			for(int i=0;i<n;i++)
			cout<<ans[i];
			cout<<endl;
			f=1;
		}
		int x=0;
		for(int i=3;i<n;i++)
		{
			ans+=(char(x+48));
			x++;
			if(x==10)
			x=0;
		}
		if(f==0)
		cout<<ans<<endl;
	}
}
