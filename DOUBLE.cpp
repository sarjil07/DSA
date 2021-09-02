#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n%2==0)
		{
			cout<<n<<"\n";
		}
		else
		{
			cout<<n-1<<"\n";
		}
	}
	return 0;
}
