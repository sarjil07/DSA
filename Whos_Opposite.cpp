#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,a,b,c,n;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		if(a>b)
		{
			n=2*(a-b);
		}
		else
		{
			n=2*(b-a);
		}
		if(a>n||b>n||c>n)
		{
			cout<<"-1"<<"\n";
		}
		else
		{
			if(c>n/2)
			{
				cout<<c-(n/2)<<"\n";
			}
			else
			{
				cout<<c+n/2<<"\n";
			}
		}
		
	}
}
