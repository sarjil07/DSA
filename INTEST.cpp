#include<iostream>
using namespace std;
int main()
{
	long long int n,k,c,t;
	c=0;
	cin>>n>>k;
	while(n>0)
	{
		cin>>t;
		if(t%k==0)
		{
			c++;
			n--;
		}
		else
		{
			n--;
		}
	}
	cout<<c;
}
