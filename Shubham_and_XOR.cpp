#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int c=0;
	long long int arr[n];
	for(long long int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for(long long int i=1;i<n;i++)
	{
		if(arr[i-1]==arr[i])
		{
			c++;
		}
	}
	
	cout<<c;
	return 0;
}
