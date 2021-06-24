#include<iostream>
#include<cmath>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
	    long long int sum=0,sum1=0,sum2=0;
		long long int arr[n];
     	for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			
			if(sum+arr[i]<1)
			{
				sum1=abs(sum+arr[i])+1;
				sum=sum+arr[i]+sum1;
				sum2=sum2+sum1;
			}
			else
			{
				sum=sum+arr[i];
			}

		}
		
		cout<<sum2<<"\n";
	
		
	}
	
}
