#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,c1,c2,temp;
	cin>>t;
	while(t--)
	{
		cin>>n;
		temp=n/3;
		if(n%3==0)
		{
			
			c1=temp;
			c2=temp;
		}
		else if((temp*2+(temp+1))==n)
		{
			c1=temp+1;
			c2=temp;
		}
		else
		{
			c1=temp;
			c2=temp+1;
		}
		cout<<c1<<" "<<c2;
		cout<<"\n";
	}
	return 0;
}
