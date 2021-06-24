#include<iostream>
using namespace std;
int main()
{
	long long int D,d,P,Q,t,j,s;
	cin>>t;
	while(t--)
	{
		cin>>D>>d>>P>>Q;
		j=d*P;
		s=((d-1)*d*Q)/2;
		cout<<j+s<<"\n";
	}
	return 0;
}
