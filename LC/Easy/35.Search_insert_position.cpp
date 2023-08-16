#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& a, int target) {
    	int low=0;
    	int high=a.size()-1,mid;
    	int ans=-1,temp=0;
    	while(low<=high)
    	{
    		mid=floor((low+high)/2);
    		cout<<a[mid]<<" "<<target<<endl;
    		if(a[mid]==target)
    		{
    			ans=mid;
    			break;
			}
			else if(target > a[mid]){
			low=mid+1;
			temp=low;
			}
			else
			high=mid-1;
		}
		if(ans!=-1)
		return ans;
		else
		return temp;
	}
};
int main()
{
	vector<int> a;
	for(int i=1;i<=5;i+=2)
	{
		a.push_back(i);
	}
	cout<<Solution().searchInsert(a,3)<<endl;
}
