#include<string>
#include<iostream>
using namespace std;
int main()
{
	int t,n,i,count;
	string s;
	cin>>t;
	while(t>0)
	{
		cin>>n;
		cin>>s;
		i=0;
		count=0;
		while(i<n)
		{
			if(s[i]=='1')
			{
				count=count+1;
				i=i+1;
			}
			else
			{
				i=i+1;
			}
		}
		if((count%2)==1)
		{
			cout<<"1"<<endl;
		}
		else
		{
			cout<<"0"<<endl;
		}
		t=t-1;
	}
	return 0;
}
