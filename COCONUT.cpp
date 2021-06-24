#include<iostream>
using namespace std;
int main()
{
	long long int t,xa,xb,a,b,c1,c2;
	cin>>t;
	while(t--)
	{
		cin>>xa>>xb>>a>>b;
		c1=a/xa;
		c2=b/xb;
		cout<<c1+c2<<"\n";
	}
}
