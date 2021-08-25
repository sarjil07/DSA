#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		string s;
		int count=0;
		cin>>s;
		int js;
		for(int i=0;i<s.length();i++)
		{
			if(isdigit(s[i]))
			{
				js=s[i]-'0';
				count=count+js;
			}
		}
		cout<<count<<"\n";
	}
}
