#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,n,m;
	
	
	cin>>n;
	int arr1[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr1[i];
	}
	cin>>m;
	int arr2[m];
	for(int i=0;i<m;i++)
	{
		cin>>arr2[i];
	}
	for(int i=m-n;i<=m-1;i++)
	{
		a=arr2[i]-arr1[n-1];
		cout<<a<<" ";
	}
	
}
