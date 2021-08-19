#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,flag;
	string a;
	cin>>t;
	while(t--)
	{
		cin>>a;
		
		n==a.size();
		flag=0;
		if(a.substr(0,2)=="</"&&a[n-1]=='>')
		{
			for(int i=2;i<n-1;i++)
			{
				if(islower(a[i])==0)
				{
					flag=1;
					break;
				}
			}
		}
		else
		{
			flag=1;
			break;
		}
		if(flag==0)
		{
			cout<<"Success"<<"\n";
		}
		else
		{
			cout<<"Error"<<"\n";
		}
	}
	
}
