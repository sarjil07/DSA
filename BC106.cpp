#include<iostream>
using namespace std;
int main()
{
	long long int n,i,s;
	cin>>n;
	long long int arr[n];
	i=0;
	s=0;
	while(i<n)
	{
		cin>>arr[i];
		s=s+arr[i];
		i++;
	}
	cout<<s;
}
