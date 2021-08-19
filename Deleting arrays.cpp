#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,i,n,k,count;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		i=n;
		count=0;
		while(i!=0)
		{
			
			if(k>=(i/2))
			{
				count++;
				i=0;
			}
			
			else
			{
				i=i-(2*k)-1;
				count++;
			}
			
			
		}
		cout<<count<<"\n";
		
	}
	return 0;
}
