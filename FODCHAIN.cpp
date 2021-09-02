#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,i;
	cin>>t;
	while(t--)
	{
		int count =0;
		cin>>n>>i;
		while(n!=0)
		{
			n=n/i;
			count++;
		}
		cout<<count<<"\n";
	}
}
