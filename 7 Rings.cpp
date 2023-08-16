#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long long n,x;
		cin>>n>>x;
		int ans=n*x;
		string s=ans.str();
		if(s[0]=='0'|| s.length()>5)
		cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;
	}
}
