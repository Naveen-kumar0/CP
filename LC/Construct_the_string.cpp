//https://codeforces.com/contest/1335/problem/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,a,b,x=97;
		cin>>n>>a>>b;
		vector<char> a1;
		for(int i=0;i<b;i++){
			a1.push_back(x);
			x++;
		}
		string ans="";
		int k=0;
		for(int i=0;i<n;i++)
		{
			ans+=a1[k];
			k++;
			if(k==b)
			k=0;
		}
		cout<<ans<<endl;
	}
}
