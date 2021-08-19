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
		i++;
		
	}
	while(i>=0)
	{
		cout<<arr[i]<<" ";
		i--;
		
	}	
	return 0; 
}
