#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,len,flag;
	string s;
	long long int count,count2;
	cin>>t;
	while(t--)
	{
		cin>>s;
		count=1;
		count2=0;
		len=s.length();
		for(int i=1;i<len;i++)
		{
			flag=0;
			for(int j=0;j<i;j++)
			{
				if(s[i]==s[j])
				{
					if(flag==0)
					{
						flag=1;
						count2++;
					}
					
					
				}
				
			}
			if(flag==0)
			{
				count++;
			}
			
		}
		cout<<(count+count2)/2<<"\n";
	}
    return 0;	
}
