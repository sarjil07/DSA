#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int count,n;
	long long int arr[n];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for(int i=0;i<n;i++)
	{
		if(arr[i]==arr[n-1])
		{
			count++;
		}
		
	}
	cout<<count;
}
