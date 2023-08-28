#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,temp,f=0;
		cin>>n;
		vector<int> a,b;
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			a.push_back(temp);
		}
		b.push_back(a[0]);
		for(int i=1;i<n;i++)
		{
			if(a[i]>=a[i-1]){
			b.push_back(a[i]);
			continue;}
			else
			{
				b.push_back(a[i]);
				b.push_back(a[i]);
			}
		}
		cout<<b.size()<<endl;
		for(int i=0;i<b.size();i++)
		cout<<b[i]<<" ";
		cout<<endl;
	}
}
