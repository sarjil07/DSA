#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<char> js1;
	stack<char> js2;
	int t;
	string res1,res2;
	char res[150];
	
	cin>>t;
	while(t--)
	{
		scanf(" %[^\n]s",res);
		for(int i=0;i<strlen(res);i++)
		{
			if(res[i]==' ')
			{
				js1.push('&');
			}
			else if(res[i]=='A'||res[i]=='B'||res[i]=='C'||res[i]=='D'||res[i]=='E')
			{
				js1.push(res[i]);
			}
			else
			{
				js2.push(res[i]);
			}
		}
		res1="";
		res2="";
		while(!js1.empty())
		{
			res1+=js1.top();
			js1.pop();
		}
		while(!js2.empty())
		{
			res2+=js2.top();
			js2.pop();
		}
		reverse(res1.begin(),res1.end());
		
		
		cout<<res1+res2<<"\n";
	}
	return 0;
	
}
