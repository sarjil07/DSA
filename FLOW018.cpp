#include<iostream>
using namespace std;
int main()
{
	int t,n,sum,i;
	cin>>t;
	while(t>0)
	{
		cin>>n;
		i=1;
		sum=1;
		while(i<=n)
		{
			sum=sum*i;
			i++;
			
			
		}
		cout<<sum<<"\n";
		t--;
		
	}
}
