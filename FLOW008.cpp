#include<iostream>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t>0)
	{
		cin>>n;
		if(n<10)
		{
			cout<<"Thanks for helping Chef!"<<"\n";
			t--;
		}
		else
		{
			cout<<"-1"<<"\n";
			t--;
		}
		
	}
	return 0;
}
