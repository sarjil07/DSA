#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,l,r,x,sum,count;
	cin>>t;
	while(t--)
	{
		ios_base::sync_with_stdio(0);
        cin.tie(0);
		cin>>l>>r;
		
		count=0;
		for(long long int i=l;i<=r;i++)
		{
			x=i;
			sum=0;
			while(x>0){
				sum=sum+(x%16);
			    x=x/16;
			}
			if(__gcd(i,sum)>1)
		   {
			   count++;
		   }
		    
		}
		cout<<count<<"\n";
	}
}
