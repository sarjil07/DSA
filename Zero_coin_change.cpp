#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,s,ans;
	cin>>n>>s;
	if(n>s)
	{
		ans=1;
	}
	else if(s%n==0)
	{
		ans=s/n;
	}
	else
	{
		ans=(s/n)+1;
	}
	cout<<ans;

}
