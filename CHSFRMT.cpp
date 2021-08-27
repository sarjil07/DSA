#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,a,b,sum;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		sum=a+b;
		if(sum<3)
		{
			cout<<"1"<<"\n";
		}
		else if(sum>=3&&sum<=10)
		{
			cout<<"2"<<"\n";
		}
		else if(sum>=11&&sum<=60)
		{
			cout<<"3"<<"\n";
		}
		else
		{
			cout<<"4"<<"\n";
		}
	}
}
