
#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
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
				cout<<"YES"<<"\n";
				break;
			}
			else
			{
				i=i+1;
			}
		}
		
		if(flag==0)
		{
			cout<<"NO"<<"\n";
		}
		t=t-1;
	}
}
