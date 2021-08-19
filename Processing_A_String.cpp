#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	string a;
	cin>>t;
	while(t--)
	{
		cin>>a;
		
		int count=0;
		for(int i=0;i<a.length();i++)
		{
			if(a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9')
			{
				int s1=a[i]-'0';
				count=count+s1;
			}
		}
		cout<<count;
	}
}
