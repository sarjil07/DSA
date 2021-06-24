#include<iostream>
using namespace std;
int main()
{
	int t,D,d,p,q,s,n,m,sum,a,b;
	cin>>t;
	while(t--)
	{
		cin>>D>>d>>p>>q;
		n=D/d;
		m=D%d;
		s=n-1;
		sum=(s*(s+1))/2;
		
		a=d*((n*p) + (sum*q));
		b=m*(p+(n*q));
		
		cout<<a+b<<"\n";
	}
	return 0;
}
