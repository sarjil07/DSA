#include<iostream>
using namespace std;
int main()
{
	int t,n,i,r;
	cin>>t;
	while(t>0)
	{
		cin>>n;
		int a[n],b[n],c[n];
		i=0;
		r=0;
		while(i<n)
		{
			cin>>a[i];
			i++;
		}
		i=0;
		while(i<n)
		{
			cin>>b[i];
			i++;
		}
		i=0;
		while(i<n)
		{
			
			c[i]=(a[i]*20)-(b[i]*10);
			r=max(c[i],r);
			i++;
			
		}
		cout<<r<<"\n";
		t--;
		
		
		
		
	}
}
