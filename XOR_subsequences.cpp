#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<long long int> a,ans;
	map<long long int,long long int> mp;
	long long int n,t;
	cin>>t;
	
	while(t--){
	   cin>>n;
	   for(int i=0;i<n;i++){
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
		    cout<<ans[i];
	    }
    
	}
	return 0;
	
}
