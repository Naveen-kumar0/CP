#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int m,n,f=0,x=0;
		cin>>n>>m;
		char a[n][m];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			cin>>a[i][j];
		}
		string tar="vika";
		for(int i=0;i<m;i++ )
		{
			f=0;
			for(int j=0;j<n;j++)
			{
				if(a[j][i]==tar[x])
				{
					//cout<<"i "<<i<<"j "<<j<<endl;
					f=1;
					break;
				}
			}
			if(f==1)
			x++;
			//if(f==0)
			//{
			//	break;
			//}
		}
		if(x<=3)
		cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;
	}
}
