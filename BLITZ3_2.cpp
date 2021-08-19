#include<iostream>
using namespace std;
int main()
{
	long long int t,n,a,b;
	cin>>t;
	while(t--)
	{
		cin>>n>>a>>b;
		cout<<2*(180+n)-(a+b)<<"\n";
	}
	return 0;
}
