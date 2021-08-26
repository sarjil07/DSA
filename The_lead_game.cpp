#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,diff,w,ar1,ar2;
	cin>>n;
	long long int max=0;
	int a1=0;
	int a2=0;
	for(int i=0;i<n;i++)
	{
		cin>>ar1>>ar2;
	    a1=a1+ar1;
	    a2=a2+ar2;
	    diff=a1-a2;
	    
		if(diff>0)
		{
			if(diff>max)
			{
				max=diff;
				w=1;
			}
		}
		else
		{
			if(abs(diff)>max)
			{
				max=abs(diff);
				w=2;
			}
		}
	}
	cout<<w<<" "<<max;
	
}
