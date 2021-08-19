#include<iostream>
using namespace std;
int main()
{
	int t,x,a,b,temp;
	cin>>t;
	while(t>0)
	{
		cin>>x;
		cin>>a;
		cin>>b;
		temp=a+(100-x)*b;
		cout<<temp*10;
		t=t-1;
	}
	return 0;
}
