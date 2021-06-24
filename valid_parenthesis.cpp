#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{
	stack<int> stack;
	string s="{[]}";
	for(int i=0;i<s.length();i++)
	{
		char c=s[i];
		if(c=='('||c=='['||c=='{')
		{
			stack.push(c);
		}
		else
		{
			if(stack.empty())
			{
				cout<<"NO";
			}
			char js=stack.peek();
			if(c==')'&&js!='(')
			{
				return false;
			}
			else if(c==']'&&js!='[')
			{
				return false;
			}
			else if(c=='}'&&js!='{')
			{
				return false;
			}
			else
			{
				stack.pop();
			}
			
		}
	}
	return stack.empty();
}
