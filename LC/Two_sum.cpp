#include<bits/stdc++.h>
using namespace std;
int main()
{
	string n;
	int target,t1=0,t2=0;
	cin>>n;
	cin>>target;
	vector<int> a;
	cout<<n.length();
	for(int i=1;i<n.length();i+=2)
	{
		a.push_back(int(n[i])-48);
	}
	for(int i=0;i<a.size();i++)
	cout<<a[i]<<" ";
	for(int i=0;i<a.size()-1;i++)
	{
		if(a[i]+a[i+1]==target)
		{
			cout<<"hi";
			t1=i;
			t2=i+1;
			break;
		}
	}
	cout<<"["<<t1<<","<<t2<<"]";
}
