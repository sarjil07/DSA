#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	string a;
	bool flag=false;
	cin>>t;
	while(t--)
	{
		cin>>a;
		flag=false;
		n=a.size();
		if(n>3)
		{
			flag=(a[0]=='<'&&a[1]=='/'&&a[n-1]=='>');
			for(int i=2;i<n-1;i++)
		    {
			    if(!(islower(a[i])||isdigit(a[i])))
			    {
				   flag=false;
			    }
	     	}	
		}
		
		

		if(flag)
		{
			cout<<"Success"<<"\n";
		}
		else
		{
			cout<<"Error"<<"\n";
		}
	}
}
