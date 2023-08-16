#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int romanToInt(string s,string s1) {
    vector<int> a;
	a.push_back(1);
	a.push_back(5);
	a.push_back(10);
	a.push_back(50);
	a.push_back(100);
	a.push_back(500);
	a.push_back(1000);
	long long ans=0;
	for(int i=0;i<s.length();i++)
	{
		int pos=s1.find(s[i]);
		ans+=a[pos];
	}
	cout<<ans<<endl;
    }
};
int main()
{
	string s,s1="IVXLCDM";
	cin>>s;
	Solution x;
	x.romanToInt(s,s1);
}
