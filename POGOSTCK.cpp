#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);	
	int t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		ll arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		ll s=INT_MIN;
		for(int i=n-1;i>=0;i--)
		{
			if(i+k<n)
			{
				arr[i]+=arr[i+k];
			}
			s=max(s,arr[i]);
		}
		cout<<s<<"\n";
	}
	
	
	return 0;
}
