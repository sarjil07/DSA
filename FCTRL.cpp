#include<iostream>
using namespace std;
int main()
{
	long long int t,n,i,count,j;
	cin>>t;
	while(t>0)
	{
		cin>>n;
		i=5;
		count=0;
		while(i<=n)
		{
			j=n/i;
			count=count+j;
			i=i*5;
		}
		cout<<count<<"\n";
		t--;
	}
}
