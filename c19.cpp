#include<iostream>
using namespace std;
int main()
{
	int l,r;
	cin>>l>>r;
	while(l<=r)
	{
		if(l%2==1)
		{
			cout<<l<<" ";
			l=l+1;
		}
		else
		{
			l=l+1;
		}
	}
	return 0;
}
