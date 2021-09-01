#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,avg,sum;
	cin>>t;
	while(t--)
	{
		cin>>n;
		sum=0;
		avg=0;
		long long int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
					}
		for(int j=0;j<n;j++)
		{
			sum=sum+arr[j];
			avg=sum/(j+1);
			cout<<avg<<" ";
				
		}
		cout<<"\n";
		
	}
}
