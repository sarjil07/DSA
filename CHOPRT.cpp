#include<iostream>
using namespace std;
int main()
{
	int t,a,b;
	cin>>t;
	while(t>0)
	{
		cin>>a>>b;
		if(a==b)
		{
			cout<<"="<<"\n";
			t--;
		}
		else if(a>b)
		{
			cout<<">"<<"\n";
			t--;
		}
		else
		{
			cout<<"<"<<"\n";
			t--;
		}
	}
	return 0;
}
