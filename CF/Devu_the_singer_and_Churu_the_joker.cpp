//https://codeforces.com/contest/439/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,d,sum=0,temp;
	cin>>n>>d;
	vector<int> a;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		a.push_back(temp);
		sum+=temp;
	}
	temp=d;
	temp-=sum;
	if(temp < (n-1)*10)
	{
		cout<<"-1"<<endl;
	}
	else
	cout<<temp/5<<endl;
}
