#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t,flag=0;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>s;
		flag=0;
		int i=0;
		while(i<s.size())
		{
			if(s[i]=='*'&&(s[i+1]=='0'&&s[i+2]=='0')){
				i=i+3;
			}
			else
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			cout<<"YES"<<"\n";
		}
		else
		{
			cout<<"NO"<<"\n";
		}
	}
	return 0;
	
}
