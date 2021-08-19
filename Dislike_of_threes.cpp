#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int i=1;
		while(n!=0)
		{
			if(i%3!=0&&i%10!=3)
			{
				n--;
				i++;
			}
			else
			{
				i++;
			}
		}
		cout<<i-1<<"\n";
	}
	return 0;
	
}
