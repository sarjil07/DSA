#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,a,b,i,j,res,res1;
	cin>>t;
	while(t--)
	{
		ios_base::sync_with_stdio(false);
        cin.tie(NULL);
		res=LLONG_MAX;
		cin>>n>>a>>b;
		j=n;
		for(int i=0;i<n;i++)
		{
			res1=(a*i*i)+(b*j*j);
			res=min(res,res1);
			j--;
		}
		cout<<res<<"\n";
	}
	return 0;
}
