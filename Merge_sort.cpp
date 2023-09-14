#include<bits/stdc++.h>
using namespace std;
void merge(int a[] ,int l,int m,int h)
{
	int i=l,j=m+1;
	vector<int> temp;
	while(i<=m && j<=h)
	{
		if(a[i]<=a[j])
		{
			temp.push_back(a[i]);
			i++;
		}
		else
		{
			temp.push_back(a[j]);
			j++;
		}
	}
	while(i<=m)
	{
		temp.push_back(a[i]);
			i++;
	}
	while(j<=h)
	{
		temp.push_back(a[j]);
			j++;
	}
	j=0;
	for(int i=l;i<=h;i++)
	a[i]=temp[j++];
}
void mergeSort(int a[],int l,int h)
{
	if(l<h){
	int m=(l+h)/2;
	mergeSort(a,l,m);
	mergeSort(a,m+1,h);
	merge(a,l,m,h);
	}
}
int main()
{
	int a[200]={7,2,11,9,5,12,3};
	mergeSort(a,0,6);
	for(int i=0;i<=6;i++)
	cout<<a[i]<<" ";
	cout<<endl;
}
