#include<iostream>

using namespace std;
int main()
{
	int32_t t,n,count,i,j,f;

	cin>>t;
	while(t>0)
	{
		cin>>n;
		i=0;
		count=0;
		while(i<n)
		{
			cin>>j;
			if(i==0)
			{
				count=count+1;
				f=j;
				i=i+1;
			}
			else
			{
				if(j<=f)
				{
					count=count+1;
					i=i+1;
					f=j;
				}
				else
				{
					i=i+1;
					f=j;
				}
			}
		}
		t--;
		cout<<count<<"\n";
	}
	return 0;
}
