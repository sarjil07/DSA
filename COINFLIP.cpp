#include<iostream>
using namespace std;
int main()
{
	int t,g,i,n,q;
	
	cin>>t;
	while(t>0)
	{
		cin>>g;
	
		while(g>0)
		{
			cin>>i>>n>>q;
			if(n%2==0)
			{
				cout<<n/2<<"\n";
			}
			else
			{
				if(i==q)
				{
					cout<<(n-((n+1)/2))<<"\n";
				}
				else
				{
					cout<<(n+1)/2<<"\n";
				}
			}
			g--;
		}
		t--;
	}
	return 0;
}
