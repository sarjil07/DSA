#include<iostream>
using namespace std;
int main()
{
	int n,x,k,flag,i,t,s;
	cin>>t;
	while(t>0)
	{
		flag=0;
		cin>>n;
		cin>>x;
		cin>>k;
		s=((n+1)/k)+1;
		i=0;
		while(i<s)
		{
			if((x==i*k)||(x==(n+1-i*k)))
			{
				flag=1;
				break;
			}
			else
			{
				i=i+1;
			}
		}
		if(flag==1)
		{
			cout<<"YES"<<endl;
		}
		else if(flag==0)
		{
			cout<<"NO"<<endl;
		}
		t=t-1;
	}
}
