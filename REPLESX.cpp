#include<iostream>

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,x,p,k,count,flag;
	cin>>t;
	while(t--)
	{
		cin>>n>>x>>p>>k;
		flag=0;
		count=0;
		long long int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		while(arr[n-1]!=0)
		{
			if(arr[p-1]==x)
			{
				flag=1;
				break;
			}
			
			else
			{
				arr[k-1]=0;
				sort(arr,arr+n);
				count++;
			}
		}
		if(flag==0)
		{
			cout<<-1<<"\n";
		}
		else
		{
			cout<<count<<"\n";
		}
		
	}
	return 0;
	
}
