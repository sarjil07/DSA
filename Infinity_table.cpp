#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,k,s,f,l;
	cin>>t;
	while(t--)
	{
		cin>>k;
		s=sqrt(k)+1;
		//cout<<s;
		f=2*s-1;
		l=(s-1)*(s-1);
		
		if(k==s+l)
		{
			cout<<s<<" "<<s<<"\n";
		}
		else if(k==l)
		{
			cout<<s-1<<" "<<"1"<<"\n";
		}
		
		else if(k>s+l)
		{
			cout<<s<<" "<<-(k-l-s-s)<<"\n";
		}
		
		else if(k<s+l)
		{
			
			cout<<-(l-k)<<" "<<s<<"\n";
		}
	
	}
	return 0;
}
