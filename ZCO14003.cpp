#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,k,c;
	cin>>n;
	int arr[n];
	i=0;
	while(i<n)
	{
		cin>>arr[i];
		i++;
	}
	j = sizeof(arr) / sizeof(arr[0]);
	sort(arr,arr+j);
	k=0;
	c=0;
	while(k<n)
	{
		if((arr[k]*(n-k))>c)
		{
			c=(arr[k]*(n-k));
			k++;
		}
		else
		{
			k++;
		}
		
	}
	cout<<c;
	
}
