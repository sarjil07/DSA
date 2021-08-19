#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,b,a,c,ans;
	string s;
	cin>>t;
	while(t--)
	{
		c=0;
		cin>>n>>a>>b;
		cin>>s;
		if(b<0)
		{
			for(int i=1;i<n;i++)
			{
				if(s[i-1]!=s[i])
				{
					c++;
				}
			}
			cout<<s;
			ans=(a*n)+(((c/2)+1)*b);
			cout<<ans<<"\n";
		}
		else
		{
			cout<<(a+b)*n<<"\n";
		}
	}
	return 0;
}
