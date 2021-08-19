#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,len;
	string a;
	cin>>t;
	while(t--)
	{
		cin>>a;
		len=a.size();
		if(a[0]=='1')
		{
			len=len-1;
			cout<<"10"<<a.substr(1,len)<<"\n";
		
		}
		else
		{
			cout<<"1"<<a<<"\n";
		}
	}
	return 0;
	
}
