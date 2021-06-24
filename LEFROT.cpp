#include<iostream>
using namespace std;
int main()
{
	int d,n,i,j,x;
	cin>>n>>d;
	int arr[n];
	i=0;
	while(i<n)
	{
		cin>>arr[i];
		i++;
	}
	i=0;
	j=0;
	while(i<d)
	{
		x=arr[0];
		while(j<n-1)
		{
			
			arr[j]=arr[j+1];
			j++;
			
		}
		arr[n-1]=x;
		i++;
	}
	i=0;
	while(i<n)
	{
		cout<<arr[i]<<"\n";
		i++;
	}
	return 0;
	
}
