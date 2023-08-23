#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
void printS(int i,int n,vector<int> arr,vector<int> ds, set< vector<int> > &fin,int sum)
{
	if(i==n)
	{
		if(sum==0)
		{
			sort(ds.begin(),ds.end());
			fin.insert(ds);
		}
		return;
	}
	if(sum>=arr[i])
	{
		ds.push_back(arr[i]);
		printS(i+1,n,arr,ds,fin,sum-arr[i]);
		ds.pop_back();
	}
	printS(i+1,n,arr,ds,fin,sum);
}
    vector< vector<int> > combinationSum2(vector<int>& candidates, int target) {
        set< vector<int> >fin;
        vector<int> ds;
        printS(0,candidates.size(),candidates,ds,fin,target);
        vector< vector<int> >ans ;
	    set< vector<int> > :: iterator it;
	    for (it = fin.begin(); it != fin.end(); it++)
        {
    	ans.push_back(*it);
        }
        return ans;        
    }
};
int main()
{
	vector<int> candidates;
	candidates.push_back(1);
	candidates.push_back(1);
	candidates.push_back(1);
	candidates.push_back(2);
	candidates.push_back(2);
	Solution s;
	vector< vector<int> >ans;
	ans=s.combinationSum2(candidates,4);
	for(int i=0;i<ans.size();i++)
    {
    	for(int j=0;j<ans[i].size();j++)
    	cout<<ans[i][j]<<" ";
    	cout<<endl;
	}
}
