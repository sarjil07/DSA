#include<iostream>
using namespace std;
int main()
{
	long long int t,n,k,sum,sum1;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		sum=0;
		sum1=0;
        long long int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			if(i<k)
			{
				sum=sum+arr[i];
			}
		}
		sum1=sum;
		for(int i=0;i<n-k;i++)
		{
			sum1=sum1+arr[i+k]-arr[i];
			sum=max(sum,sum1);
		}
		cout<<sum<<"\n";
	}
}
