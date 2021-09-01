#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,k;
	cin>>t;
	while(t--)
	{
		
		vector<int> v1;
		vector<int> v2;
		cin>>n>>k;
		int arr[k];
		int flag;
		flag=1;
		int j=1;
		for(int i=0;i<k;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+k);
		int i=0;
		while(j<=n)
		{
			if(j!=arr[i])
			{
				if(flag==1)
				{
					v1.push_back(j);
					
					j++;
					flag=2;
					continue;
				}
				else if(flag==2)
				{
					v2.push_back(j);
					
					j++;
					flag=1;
					continue;
				}
				
				
			}
			else
			{
				if(i<k)
				{
					i++;
				}
				j++;
			}
		}
		for (auto& it : v1)
		{
			cout<<it<<" ";
		}
		cout<<"\n";
		for (auto& it : v2)
		{
			cout<<it<<" ";
		}
		cout<<"\n";
		
	}
	return 0;
}
