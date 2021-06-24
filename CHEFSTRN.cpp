#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	string res;
	stack<char> js;
	cin>>s;

	for(int i=0;i<s.size();i++)
	{
		if(js.empty())
		{
			js.push(s[i]);
			
		}
		else if(s[i]==js.top())
		{
			js.pop();
		
		}
		else if(s[i]!=js.top())
		{
			js.push(s[i]);
			
		}
	}
	res="";
	if(js.empty())
	{
		cout<<"Empty String";
	}
	else
	{
		while(!js.empty())
		{
			res=res+js.top();
			js.pop();
		}
		reverse(res.begin(),res.end());
		cout<<res;
	}
	

	return 0;
	
}
