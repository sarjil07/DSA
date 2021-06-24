#include<iostream>
using namespace std;
int main()
{
	long long int a,b,c,t;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		if((a>b&&c>a)||(a>c&&b>a))
		{
			cout<<a<<"\n";
		}
		else if((a<b&&c>b)||(a>b&&b>c))
		{
			cout<<b<<"\n";
		}
		if((a>c&&c>b)||(a<c&&b>c))
		{
			cout<<c<<"\n;"
		}
	}
	return 0;
}
