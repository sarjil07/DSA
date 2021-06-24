#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			
		}
		sort(arr,arr+n);
		int sum=0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]<=sum)
			{
				sum++;
			}
			else
			{
				break;
			}
		}
		cout<<sum<<"\n";
	}
	return 0;
}
