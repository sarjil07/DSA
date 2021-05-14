#include<iostream>
using namespace std;
int main()
{
	int n,i;
	i=0;
	cin>>n;
	int arr[n];
	while(i<n)
	{
		cin>>arr[i];
		i=i+1;
	}
	while(n-1>=0)
	{
		cout<<arr[n-1]<<" ";
		n=n-1;
	}
	return 0;
}
