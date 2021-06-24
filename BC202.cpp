#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
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
		int i=0;
		while(i<n)
		{
			if(i==0)
			{
				cout<<arr[0]<<" ";
				i++;
			}
			else if(arr[i]==arr[i-1])
			{
				i++;
			}
			else if(arr[i]!=arr[i-1])
			{
				cout<<arr[i]<<" ";
				i++;
			}
		}
		cout<<"\n";
	}
	return 0;
}
