#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	for(i=9;i>0;i--)
	{
		if(n%i==0)
		{
			cout<<i;
			break;
		}
	}
}
