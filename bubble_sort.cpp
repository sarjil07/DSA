#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int count,n,temp;
	bool swap;
	swap=true;
	cin>>n;
	long long int arr[n];
	count=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	while(swap!=false)
	{
		swap=false;
		count=count+1;
		for(int i=0;i<n-1;i++)
		{
			if(arr[i]>arr[i+1])
			{
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
				swap=true;
			}
		}
		
	}
	cout<<count;
	return 0;
}
