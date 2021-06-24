#include<iostream>
using namespace std;
int main()
{
	long long int t,a,b;
	cin>>t;
	while(t>0)
	{
		cin>>a>>b;
		if(a>b)
		{
			cout<<a<<" ";
		}
		else
		{
			cout<<b<<" ";
		}
		cout<<a+b<<"\n";
		t--;
	}
}
