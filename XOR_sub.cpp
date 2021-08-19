#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n;
	long long int a;
	vector<long long int> ans;
	
	cin>>t;
	while(t--)
	{
		cin>>n;
		vector<long long int> a(n);
		map<long long int,long long int> mp;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			mp[a[i]]++;
			if(mp[a[i]]==1)
			{
				ans.push_back(i+1);
			}
			
		}
		cout<<ans.size()<<"\n";
		for(int i=0;i<ans.size();i++)
		{
			cout<<ans[i]<<" ";
		}
		cout<<"\n";
		
	}
	return 0;
	
}
