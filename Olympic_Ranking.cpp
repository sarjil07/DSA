#include<iostream>
using namespace std;
int main()
{
	long long int t,g1,s1,b1,g2,s2,b2,t1,t2;
	cin>>t;
	while(t--)
	{
		cin>>g1>>s1>>b1>>g2>>s2>>b2;
		t1=g1+s1+b1;
		t2=g2+s2+b2;
		if(t1>t2)
		{
			cout<<"1"<<"\n";
		}
		else
		{
			cout<<"2"<<"\n";
		}
	}
	return 0;
}
