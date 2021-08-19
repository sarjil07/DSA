#include<iostream>
using namespace std;
int main()
{
	int n,k,i,f;
    cin>>n>>k;
	int arr[n];
	i=0;
	f=0;
	while(i<n)
	{
		cin>>arr[i];
		if(arr[i]==k)
		{
			f=1;
		}
		i++;
		
	}
	cout<<arr[];
	if(f==1)
	{
		cout<<"1";
	}
	else
	{
		cout<<"-1";
	}
	return 0;
	
	
}
