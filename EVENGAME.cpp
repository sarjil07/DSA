#include<iostream>
using namespace std;
int main()
{
	long long int t,n,a,sum;
	cin>>t;
	while(t--)
	{
		sum=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			sum=sum+a;
			
		}
		if(sum%2==0)
		{
			cout<<1<<"\n";
		}
		else
		{
			cout<<2<<"\n";
		}
		
	}
	return 0;
}
