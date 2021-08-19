#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,t,k,i,count;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		i=n;
		count=0;
		if(i%(2*k+1)==0)
		{
			cout<<(i/(2*k+1))<<"\n";
		}
		else
		{
			cout<<(i/(2*k+1))+1<<"\n";
		}
	}
	return 0;
}
