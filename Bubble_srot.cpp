#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,temp,c;
	cin>>n;
	c=0;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int k=0;k<n-1;k++)
	{
		for(int j=0;j<n-k-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				c++;
			}
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	}
	cout<<c;
}
