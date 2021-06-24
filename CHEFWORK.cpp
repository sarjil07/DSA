#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,s1,s2,s3;
	cin>>n;
	int c[n],t[n];
	for(int i=0;i<n;i++)
	{
		cin>>c[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>t[i];
	}
	s1=100001;
	s2=100001;
	s3=100001;
	for(int i=0;i<n;i++)
	{
		if(t[i]==1)
		{
			s1=min(s1,c[i]);
		}
		else if(t[i]==2)
		{
			s2=min(s2,c[i]);
		}
		else
		{
			s3=min(s3,c[i]);
		}
	}
	if(s1+s2>s3)
	{
		cout<<s3;
	}
	else
	{
		cout<<s1+s2;
	}
}
