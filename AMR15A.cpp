#include<iostream>
using namespace std;
int main()
{
	int n,c1,c2,l;
	cin>>n;
	c1=0;
	c2=0;
	for(int i=0;i<n;i++)
	{
		cin>>l;
		if(l%2==0)
		{
			c2++;
		}
		else
		{
			c1++;
		}
	}
	if(c2>c1)
	{
		cout<<"READY FOR BATTLE";
		
	}
	else
	{
		cout<<"NOT READY";
	}
	return 0;
}
