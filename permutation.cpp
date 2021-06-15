#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string s;
int n;
int printpermutation(string ss,int vis[])
{
if(s.size()==ss.size())
{
	cout<<ss<<"\n";
	return 0;
	}	
	for(int i=0;i<n;i++)
	{
		if(vis[i]==0)
		{
			vis[i]=1;
			printpermutation(ss+s[i],vis);
			vis[i]=0;
		}
	}
}

int main()
{
	cin>>s;
	n=s.size();
	int vis[n]={0};
	string ss="";
	printpermutation(ss,vis);
	return 0;
}
