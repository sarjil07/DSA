#include<iostream>
using namespace std;
int main()
{
	int t,d,m,a;
	cin>>t;
	while(t--)
	{
		cin>>d;
		a=0;
		while(d!=0)
		{
			
			m=d%10;
			if(m==4)
			{
				a++;
				d=d/10;
			}
			else
			{
				d=d/10;
			}
			
		}
		cout<<a<<"\n";
	}
	return 0;
}
