#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,b;
	char c;
	cin>>a>>b;
	cin>>c;
	float res;
	if(c=='/')
	{
		res=a/b;
		cout<<res;
	}
	else if(c=='+')
	{
		res=a+b;
		cout<<res;
	}
	else if(c=='*')
	{
		res=a*b;
		cout<<res;
	}
	else if(c=='-')
	{
		res=a-b;
		cout<<res;
	}
}
