#include<iostream>
using namespace std;
int main()
{
	int t,x;
	cin>>t;
	while(t>0)
	{
		cin>>x;
		if(x%10==0)
		{
			cout<<0<<"\n";
			t--;
		}
		else if(x%5==0)
		{
			cout<<1<<"\n";
			t--;
		}
		else
		{
			cout<<-1<<"\n";
			t--;
		}
		
		
	}
	return 0;

}
