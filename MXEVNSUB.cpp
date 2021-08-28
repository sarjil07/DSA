#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,half;
	cin>>t;
	while(t--)
	{
		cin>>n;
		half=n/2;
		cout<<half<<"\n";
		if(n==2)
		{
			cout<<"1"<<"\n";
		}
		else if(n%2==1&&half%2==1)
		{
			cout<<n<<"\n";
		}
		else if(n%2==0&&half%2==0)
		{
			cout<<n<<"\n";
			
		}
		else if(n%2==1&&half%2==0)
		{
			cout<<n-1<<"\n";
		}
		else if(n%2==0&&half%2==1)
		{
			cout<<n-2<<"\n";
		}
	}
	return 0;
}
