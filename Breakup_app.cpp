#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string s;
	int c1,c2;
	while(n--)
	{
		getline(cin,s);
		if(s[0]=='G')
		{
			for(int i=0;i<s.length()-1;i++)
			{
				if((s[i]=='1'&&s[i+1]=='9')||(s[i]=='2'&&s[i+1]=='0'))
				{
					c1=c1+2;
				}
				else if(isdigit(s[i])&&isdigit(s[i+1]))
				{
					c2=c2+1;
				}
			}
			
		}
		else if(s[0]=='M')
		{
			for(int i=0;i<s.length()-1;i++)
			{
				if((s[i]=='1'&&s[i+1]=='9')||(s[i]=='2'&&s[i+1]=='0'))
				{
					c1=c1+1;
				}
				else if(isdigit(s[i])&&isdigit(s[i+1]))
				{
					c2=c2+1;
				}
			}
			
		}
	}
	if(c1>c2)
	{
		cout<<"Date"<<"\n";
	}
	else
	{
		cout<<"No Date"<<"\n";
	}
}
