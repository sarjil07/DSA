#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	int count;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>s;
		int count=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='A'||s[i]=='D'||s[i]=='O'||s[i]=='P'||s[i]=='R'||s[i]=='Q')
			{
				count++;
			}
			else if(s[i]=='B')
			{
				count=count+2;
			}
			
		}
		cout<<count<<"\n";
	}
	
}
