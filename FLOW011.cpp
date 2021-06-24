#include<iostream>
using namespace std;
int main()
{
	int t;
	float n,hra,da;
	cin>>t;
	while(t>0)
	{
		cin>>n;
		if(n<1500.00)
		{
			hra=(n*10.00)/100.00;
			da=(n*90.00)/100.00;
			cout<<n+hra+da<<"\n";
		}
		else
		{
			hra=500;
			da=(n*98.00)/100.00;
			cout<<n+hra+da<<"\n";
		}
		t--;
	}
}
