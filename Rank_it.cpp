#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q,x;
	cin>>n;
	int arr[n];
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	int low,high,mid;
	cin>>q;
	while(q--)
	{
		cin>>x;
		low=1;
		high=n;
		while(high>=low)
		{
			mid=(high+low)/2;
			if(arr[mid]>x)
			{
				high=mid-1;
			}
			else if(x>arr[mid])
			{
				low=mid+1;
			}
			else
			{
				cout<<mid<<"\n";
				break;
			}
		}
		
	}
	return 0;
}
