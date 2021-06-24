#include<iostream>
using namespace std;
int main()
{
	long long int a,b,c,d,t;
	cin>>t;
	while(t--)
	{
	cin>>a>>b>>c>>d;
	if(a==b&&c==d)
	{
		cout<<"YES"<<"\n";
	}
	else if(a==c&&c==d)
	{
		cout<<"YES"<<"\n";
	} 
	else if(a==d&&b==c)
	{
		cout<<"YES"<<"\n";
	}
	else if(b==d&&a==c)
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
