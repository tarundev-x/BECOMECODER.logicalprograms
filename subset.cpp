#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int printsubset(int ind,int n,int a[],vector<int>&ds)
{
	if(ind==n)
	{
		for(auto it:ds)
		{
			cout<<it<<" ";
		}
		cout<<"\n";
		return 0;
	}
	if(ind<n)
	{
		ds.push_back(a[ind]);
		printsubset(ind+1,n,a,ds);
		ds.pop_back();
	}
	printsubset(ind+1,n,a,ds);
	
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	vector<int>ans;
	printsubset(0,n,a,ans);
	return 0;
}
