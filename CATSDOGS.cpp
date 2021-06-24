#include<iostream>
using namespace std;
int main()
{
	int c,d,t,l;
	cin>>t;
	while(t--)
	{
		cin>>c>>d>>l;
		if(l%4==0)
		{
			cout<<"yes"<<"\n";
		}
		else
		{
			cout<<"no"<<"\n";
		}
	}
}
