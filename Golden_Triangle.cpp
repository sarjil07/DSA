#include<iostream>
using namespace std;
int main()
{
	int n,count;
	double res;
	double w,h;
	cin>>n;
	count=0;
	while(n--)
	{
		cin>>w>>h;
		if(h>w)
		{
			res=h/w;
		}
		else
		{
			res=w/h;
		}
		
		if(res>=1.6&&res<=1.7)
		{
			count++;
		}
		
	}
	cout<<count;
	return 0;
}
