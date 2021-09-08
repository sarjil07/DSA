#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,a,b;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>n>>a>>b;
		cin>>s;
		int count,count1;
		count=0;
		count1=0;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='0')
			{
				count++;
			}
			else{
				count1++;
			}
			
		}
		cout<<a*count+b*count1<<"\n";
	}
	
	return 0;
}
