#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,flag;
	string str;
	cin>>t;
	while(t--)
	{
		flag=0;
		cin>>n;
		if(n%21==0)
		{
			flag=1;
		}
		else if(n%21!=0)
		{
			str=to_string(n);
			for(int i=0;i<str.length()-1;i++)
			{
				if(str[i]=='2'&&str[i+1]=='1')
				{
					flag=1;
					break;
				}
			}
		}
		if(flag==0)
		{
			cout<<"The streak lives still in our heart!"<<"\n";
		}
		else if(flag==1)
		{
			cout<<"The streak is broken!"<<"\n";
		}
	}
	return 0;
	
}
