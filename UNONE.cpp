#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int t,n;
	
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long int arr[n];
		vector<long long int> odd;
		vector<long long int> even;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]%2==0)
			{
				even.push_back(arr[i]);
			}
			else
			{
				odd.push_back(arr[i]);
			}
		}
		for(int i=0;i<even.size();i++)
		{
			cout<<even[i]<<" ";
		}
		for(int i=0;i<odd.size();i++)
		{
			cout<<odd[i]<<" ";
		}
		cout<<"\n";
	}
}
