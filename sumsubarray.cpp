#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int N,count;
	cin>>N;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			int sum=0;
			for(int k=i;k<=j;k++)
			{
				sum=sum+a[k];
			}
        	if(sum==N)
	        {
		     cout<<"yES"<<"\n";
		     count=1;
         	}
	      }
		}
		if(count!=1)
		{
			cout<<"No";
		}
	}
