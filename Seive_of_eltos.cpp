
// Write your code here
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int N=1000001;
int seive[1000001];
void gen_seive()
{
	seive[0]=seive[1]=0;
	//make all of them one
	for(int i=2;i<=N;i++)
	{
     seive[i]=1;
	}
	for(int i=2;i*i<=N;i++)
	{
		if(seive[i]==1)
		{
			for(int j=i*i;j<=N;j+=i)
			{
				seive[j]=0;
			}
		}
	}
}

int main()
{
	gen_seive();
	int num;
	cin>>num;
	int count=0;
	for(int i=1;i<=num;i++)
	{
		if(seive[i]==1)
		{
			count++;
		}
	}
	cout<<count;
	return 0;
}
