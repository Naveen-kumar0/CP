//https://leetcode.com/problems/subsets-ii/submissions/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	void subset2(int ind,vector<int> &arr,vector<int> &ds,vector< vector<int> > &ans)
	{
		ans.push_back(ds);
		for(int i=ind;i<arr.size();i++)
		{
			if((i!=ind )&& arr[i]==arr[i-1])
			continue;
			ds.push_back(arr[i]);
			subset2(i+1,arr,ds,ans);
			ds.pop_back();
		}
	}
    vector< vector<int> > subsetsWithDup(vector<int>& nums) {
        vector< vector<int> > ans;
        vector<int> ds;
        subset2(0,nums,ds,ans);
        return ans;
    }
};
int main()
{
	vector<int> nums ;
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(2);
	Solution s;
	vector< vector<int> > ans;
	ans=s.subsetsWithDup(nums);
	for(int i=0;i<ans.size();i++)
    {
    	for(int j=0;j<ans[i].size();j++)
    	cout<<ans[i][j]<<" ";
    	cout<<endl;
	}
}
