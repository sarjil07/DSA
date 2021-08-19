#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,count,js;
	cin>>n;
	count=n/5;
	i=2;
	while(pow(5,i)<=n)
	{
		
		js=n/pow(5,i);
		count=count+(i-1)*js;
		i++;
	}
	cout<<count;
}
