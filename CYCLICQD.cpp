#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,b,c,d,t,j,s;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c>>d;
		j=a+c;
		s=b+d;
		if(j==s)
		{
			cout<<"YES"<<"\n";
		}
		else
		{
			cout<<"NO"<<"\n";
		}
	}
	return 0;
	
}
