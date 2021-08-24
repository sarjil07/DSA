#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,r;
	cin>>t;
	while(t--)
	{
		cin>>r;
		if(r>=1000&&r<1600)
		{
			cout<<"3"<<"\n";
		}
		else if(r>=1600&&r<2000)
		{
			cout<<"2"<<"\n";
		}
		else if(r<=4500&&r>=2000)
		{
			cout<<"1"<<"\n";
		}
	}
	return 0;
}
