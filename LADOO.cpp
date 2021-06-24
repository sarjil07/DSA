#include<iostream>
#include<string>
using namespace std;
int main()
{
	int i,t,rank,s,count;
	string a,o;
	cin>>t;
	while(t>0)
	{
		cin>>i>>o;
		count=0;
		while(i>0)
		{
			cin>>a;
			if(a=="CONTEST_WON")
			{
				cin>>r;
				if(r<=20)
				{
					count=count+(300+20-r);
					i--;
				}
				else
				{
					count=count+300;
					i--;
				}
			}
			else if(a=="TOP_CONTRIBUTOR")
			{
				count=count+300;
				i--;
			}
			else if(a=="BUG_FOUND")
			{
				cin>>s;
				if(50<=s&&s<=1000)
				{
					count=count+s;
					i--;
				}
			}
			else if(a=="CONTEST_HOSTED")
			{
				count=count+50;
				i--;
			}
			
		}
		if(o=="INDIAN")
		{
			cout<<count/200;
		}
		else
		{
			count<<count/400;
		}
		t--;
		
	}
	
	
}
