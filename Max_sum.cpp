#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long int arr[n];
	long long int total,count;
	total=0;
	count=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]>0)
		{
			count++;
			total+=arr[i];
		}
	}
	cout<<total<<" "<<count;
	return 0;
}
