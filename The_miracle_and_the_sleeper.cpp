#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,l,r,half,ans;
	cin>>t;
	while(t--)
	{
		cin>>l>>r;
		half=r/2;
		//cout<<half;
		if(half>=l&&r%2==0)
		{
			
			ans=(r-1)%half;
		}
		else if(half>=l&&r%2==1)
		{
			half=half+1;
			ans=r%half;
		}
		else
		{
			ans=r%l;
		}
		cout<<ans<<"\n";
		
	}
}
