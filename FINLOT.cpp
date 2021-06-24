#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int m,n,s;
	s=0;
	cin>>n;
	long long int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>m;
	long long int brr[m];
	for(int i=0;i<m;i++)
	{
		cin>>brr[i];
	}
	sort(arr,arr+n);
	sort(brr,brr+m);
    int i=0;
    int j=0;
    while(j<m)
    {
    	if(arr[i]==brr[j])
    	{
    		j++;
    		i++;
		}
		else
		{
			if(s!=brr[j])
			{
				
				s=brr[j];
				cout<<s<<" ";
				j++;
			}
			else
			{
				j++;
			}
		}
	}
	return 0;
	
}
