#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	int e,o,n,s;
	cin>>t;
	while(t--)
	{
		o=0;
		e=0;
		cin>>n;
		for(int i=0;i<2*n;i++)
		{
			cin>>s;
			if(s%2==0)
			{
				e++;
			}
			else if(s%2==1)
			{
				o++;
			}
		}
		
		if(o==n)
		{
			cout<<"Yes"<<"\n";
		}
		else
		{
			cout<<"No"<<"\n";
		}
	}
}
