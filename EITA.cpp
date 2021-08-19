#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,d,x,y,z,a1,a2;
	cin>>t;
	while(t--)
	{
		cin>>d>>x>>y>>z;
		a1=(7*x);
		a2=(d*y)+((7-d)*z);
		cout<<max(a1,a2)<<"\n";
	}
	return 0;
}
