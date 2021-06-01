#include<iostream>
using namespace std;
int main()
{
	int n,f;
	cin>>n;
	if(n%8==0||n%8==2)
	{
		cout<<"2";
	}
	else if(n%8==5)			
	{
    	cout<<"5";		
	}
	else if(n%8==3||n%8==7)
	{
		cout<<"3";
	}
	else if(n%8==4||n%8==6)
	{
		cout<<"4";
	}
	else if(n<5)
	{
		 cout<<n;
	}
	else
	{
		f=10-n;
		cout<<f;
	}
	
}
