#include<bits/stdc++.h>
using namespace std;
int main()
{
		int n,m,temp;
		cin>>n>>m;
		vector<int> a;
		for(int i=0;i<2*m;i++)
		{
			cin>>temp;
			a.push_back(temp);
		}
		for(int i=1;i<2*m;i+=2)
		{
			for(int j=i+2;j<2*m;j+=2)
			{
				if(a[j]>a[i])
				{
					swap(a[i],a[j]);
					swap(a[i-1],a[j-1]);
				}
			}
		}
		int ans=0;
		for(int i=0;i<a.size()-1;i+=2)
		{
			if(a[i]<=n)
			{
				ans+=(a[i]*a[i+1]);
				n-=a[i];
			}
			else
			{
				ans+=(n*a[i+1]);
				break;
			}
		}
		cout<<ans<<endl;
}
