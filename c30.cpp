#include<iostream>
using namespace std;
int main()
{
	int n,i,sum;
	cin>>n;
	i=1;
	sum=0;

	while(i<=n)
	{
		sum=sum+i;
		i=i+1;
	}
	cout<<sum;
	
}
