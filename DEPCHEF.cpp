#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t,n,s,s1,i;
	cin>>t;
	while(t>0)
	{
		cin>>n;
		int a[n],d[n];
		
		for(i=0;i<n;i++)
		{
			cin>>a[i];	
		}
		
		for(i=0;i<n;i++)
		{
			cin>>d[i];
		}
		s=-1;
		if(d[0]>(a[n-1]+a[1]))
		{
		    s=max(s,d[0]);
		}
		else if(d[n-1]>(a[0]+a[n-2]))
		{
			s=max(s,d[n-1]);
			
		}
		for(i=1;i<n-1;i++)
		{
			if(d[i]>a[i-1]+a[i+1])
			{
				s=max(s,d[i]);
		    }
		}
		cout<<s<<"\n";
		t--;
	}
	return 0;
	
}
