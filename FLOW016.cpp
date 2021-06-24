#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return gcd(b,a%b);
	}
}
int main()
{
	int t,lcm,a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		cout<<gcd(a,b)<<" ";
		lcm=a*b;
		cout<<lcm/gcd(a,b)<<"\n";
		
	}
	return 0;
}
