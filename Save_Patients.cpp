#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	bool check=false;
	cin>>n;
	long long int arr1[n],arr2[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr1[i];
		
	}
	for(int i=0;i<n;i++)
	{
		cin>>arr2[i];
		if(arr2[i]>arr1[i])
		{
			check=true;
		}
	}
	if(check)
	{
		cout<<"No";
	}
	else
	{
		cout<<"Yes";
	}
	return 0;
}
