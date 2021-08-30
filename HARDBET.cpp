#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,sa,sb,sc;
	cin>>t;
	while(t--)
	{
		cin>>sa>>sb>>sc;
		if(sc<sb&&sc<sa)
		{
			cout<<"Alice"<<"\n";
		}
		else if(sb<sc&&sb<sa)
		{
			cout<<"Bob"<<"\n";
		}
		else
		{
			cout<<"Draw"<<"\n";
		}
	}
}
