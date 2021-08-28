#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,a1,b1,a2,b2,t;
	cin>>t;
	while(t--)
	{
		int flag=0;
		cin>>a>>b>>a1>>b1>>a2>>b2;
		if((a==a1&&b==b1)||(a==b1&&b==a1))
		{
			flag=1;
		}
		else if((a==a2&&b==b2)||(a==b2&&b==a2))
		{
			flag=2;
		}
		cout<<flag<<"\n";
	}
	return 0;
	
}
