#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,x,tb,cap;
	cin>>t;
	while(t--)
	{
		cin>>n>>x;
		long long int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		tb=0;
		cap=0;
		for(int i=0;i<n;i++)
		{
			cap=cap+arr[i];
			if(cap>x)
			{
				break;
			}
			tb++;
		}
		cout<<tb<<"\n";
	}
}
