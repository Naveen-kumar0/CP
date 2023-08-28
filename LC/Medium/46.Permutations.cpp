//https://leetcode.com/problems/permutations/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	void perm(vector<int> arr,vector<int> &ds,vector< vector<int> > &ans,int temp[])
	{
		if(ds.size()==arr.size()){
		ans.push_back(ds);
		return;
		}
		for(int i=0;i<arr.size();i++)
		{
			if(!temp[i])
			{
				ds.push_back(arr[i]);
				temp[i]=1;
				perm(arr,ds,ans,temp);
				temp[i]=0;
				ds.pop_back();
			}
		}
	}
    vector< vector<int> > permute(vector<int>& nums) {
        vector<int> ds;
        int temp[nums.size()];
        for(int i=0;i<nums.size();i++)
        temp[i]=0;
        vector< vector<int> > ans;
        perm(nums,ds,ans,temp);
        return ans;
    }
};
int main()
{
	vector<int> nums ;
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(3);
	Solution s;
	vector< vector<int> > ans;
	ans=s.permute(nums);
	for(int i=0;i<ans.size();i++)
    {
    	for(int j=0;j<ans[i].size();j++)
    	cout<<ans[i][j]<<" ";
    	cout<<endl;
	}
}
