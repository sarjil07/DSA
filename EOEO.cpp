#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,js;
	cin>>t;
	while(t--)
	{
		cin>>n;
		while(n%2==0)
		{
			n=n/2;
		}
		js=n/2;
		cout<<js<<"\n";
		
	}
	return 0;
	
}
