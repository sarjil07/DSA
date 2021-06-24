#include<iostream>
using namespace std;
int main()
{
	int t,n,m;
	cin>>t;
	while(t>0)
	{
		cin>>n;
		if(n%2==1)
		{
			m=(n+1)/2;
			cout<<m<<"\n";
			t--;
		}
	}
	return 0;
}
