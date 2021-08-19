#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n;
    cin>>t;
    while(t--)
    {
    	cin>>n;
    	long long int arr[n];
    	for(int i=1;i<=n;i++)
    	{
    		cin>>arr[i];
		}
		sort(arr,arr+n+1);
		cout<<arr[1];
	}
}
