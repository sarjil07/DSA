#include<bits/stdc++.h>
# define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll t,a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		if(b&(b-1))
		{
		    cout<<"No"<<"\n";
		}
		else
		{
		    cout<<"Yes"<<"\n";
		}
	}
	return 0;
}
