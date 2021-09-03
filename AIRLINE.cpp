#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,a,b,c,d,e;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c>>d>>e;
		if((a+b<=d)&&c<=e)
		{
			cout<<"YES"<<"\n";
		}
		else if((a+c<=d)&&(b<=e))
		{
			cout<<"YES"<<"\n";
		}
		else if((b+c<=d)&&(a<=e))
		{
			cout<<"YES"<<"\n";
		}
		else
		{
			cout<<"NO"<<"\n";
		}
	}
}
