#include<string>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
	int t,count,j,l;
	string s;
	cin>>t;
	while (t>0)
	{
		cin>>s;
		j=s.size();
		count=0;
		l=0;
		while(l<(j-1))
		{
			if(s[l]=='1')
			{
				if(l==0||s[l-1]=='0')
				{
					count=count+1;
					
				}
				l=l+1;
			}
			else
			{
				l=l+1;
			}
			
		}
		cout<<count<<endl;
		t=t-1;
		
	}
	return 0;
}
