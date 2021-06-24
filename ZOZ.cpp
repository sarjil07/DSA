#include<iostream>
using namespace std;
int main()
{
	long long int t,n,k,i,s,s1;
	cin>>t;
	while(t>0)
	{
		cin>>n>>k;
		int arr[n];
		i=0;
		s=s1=0;
		while(i<n)
		{
			cin>>arr[i];
			s=s+arr[i];
			i++;
		}
		i=0;
		while(i<n)
		{
			if((arr[i]+k)>(s-arr[i]))
			{
				s1++;
				i++;
			}
			else
			{
				i++;
			}
		}
		cout<<s1<<"\n";
		t--;
	}
	return 0;
	
}
