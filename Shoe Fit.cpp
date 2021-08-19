#include<iostream>
using namespace std;
int main()
{
	int t,a,b,c,sum;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		sum=a+b+c;
		if(sum>0&&sum<3)
		{
			cout<<1<<"\n";
		}
		else
		{
			cout<<0<<"\n";
		}
	}
}
