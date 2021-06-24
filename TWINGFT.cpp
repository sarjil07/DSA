#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t,k,n,i,s;
	cin>>t;
	while(t>0)
	{
		cin>>n>>k;
		long long int arr[n];
		i=0;
		while(i<n)
		{
			cin>>arr[i];
			i++;
		}
		sort(arr,arr+n);
		s=0;
		i=0;
		while(i<n)
		{
			if(i==0||i%2==1)
			{
				s=s+arr[i];
				i++;
			}
			else
			{
				i++;
			}
		}
		cout<<s<<"\n";
		t--;
		
	} 
}
