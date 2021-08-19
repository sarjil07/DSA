#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,sum,mo,flag,sp;
	bool tf;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>s;
		sum=0;
		flag=0;
		for(int i=0;i<s.length();i++)
		{
			sum=sum+(s[i]-'0');
		}
		
		mo=sum%3;
		if(mo==0)
		{
			cout<<s<<"\n";
			flag=1;
		}
		else if(mo==2)
		{
			sp=1;
		}
		else
		{
			sp=2;
		}
		tf=false;
		if(flag==0)
		{
			for(int i=0;i<s.length();i++)
			{
				if(tf==false&&s[i]-'0'>sp)
				{
					cout<<sp;
					tf=true;
				}
				cout<<s[i];
			}
			if(tf==false)
			{
				cout<<sp;
			}
		}
		cout<<"\n";
		
	
	}
	return 0;
}
