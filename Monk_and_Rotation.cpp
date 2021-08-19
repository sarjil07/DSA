#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t,n,k,s;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		k=k%n;
		vector<int> v1,v2;
		for(int i=0;i<n;i++)
		{
			cin>>s;
			v1.push_back(s);
		}
		for(int i=n-k;i<n;i++)
		{
			
			
			v2.push_back(v1[i]);
		}
		for(int i=0;i<k;i++)
		{
			v1.pop_back();
		}
		for(int i=0;i<k;i++)
		{
			cout<<v2[i]<<" ";
		}
		for(int i=0;i<n-k;i++)
		{
			cout<<v1[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}




/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long int t,n,k,s;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		k=k%n;
		vector<int> v1;
		for(int i=0;i<n;i++)
		{
			cin>>s;
			v1.push_back(s);
		}
		for(int i=0;i<k;i++)
		{
			
			v1.insert(v1.begin(),v1[n-1]);
			v1.pop_back();
		}
		for(int i=0;i<n;i++)
		{
			cout<<v1[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
*/

