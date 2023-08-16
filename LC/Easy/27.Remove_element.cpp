#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
		vector<int> b;
		for(int i=0;i<nums.size();i++)
		{
			if(nums[i]==val)
			continue;
			else
			b.push_back(nums[i]);
		}
		nums.clear();
		for(int i=0;i<b.size();i++)
		{
			nums.push_back(b[i]);
		}
		for(int i=0;i<nums.size();i++)
		cout<<nums[i]<<" ";
		cout<<endl;
		return nums.size();
    }
};
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,temp,val;
		cin>>n>>val;
		vector<int> a;
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			a.push_back(temp);
		}
		cout<<Solution().removeElement(a,val)<<endl;
	}
}
