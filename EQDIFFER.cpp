#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n;
	int count;
	cin>>t;
	while(t--)
	{
		count=0;
		cin>>n;
		map<int,int> m;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			m[arr[i]]++;
			count=std::max(count,m[arr[i]]);
		}
		if(n<=2)
		{
			cout<<"0"<<"\n";
			continue;
		}
		if(count==1)
		{
			cout<<n-2<<"\n";
			continue;
		}
		else
		{
			cout<<n-count<<"\n";
		}
		
	}
}
