#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,b,c;
	cin>>a>>b;
	c=a-b;
	string str;
	str=to_string(c);
	int js=str[0]-'0';
	if(js==9)
	{
		js=js-1;
		
	}
	else
	{
		js=js+1;
	}
	cout<<js;
	for(int i=1;i<str.length();i++)
	{
		cout<<str[i];
	}
	return 0;
}
