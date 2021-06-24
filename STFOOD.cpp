#include<iostream>
using namespace std;
int main()
{
	int t,n,s,p,v,c,l;
	cin>>t;
	while(t>0)
	{
		cin>>n;
		c=0;
		if(n==1)
		{
			cin>>s>>p>>v;
		}
	    else
	    {
	    	while(n>0)
		    {
			   cin>>s>>p>>v;
			   s=p/(s+1);
			   l=v*s;
			
			   if(l>c)
			   {
				  c=l;
				  n--;
			    }
			    else
			    {
				  n--;
			    }
			}
	    }
		
		cout<<c<<"\n";
		t--;
	}
}
