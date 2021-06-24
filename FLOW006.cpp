#include<iostream>
using namespace std;
int main()
{
	int t,n,a,c;
	cin>>t;
	while(t>0)
	{
		cin>>n;
		c=0;
		while(n!=0)
		{
			c+=(n%10);
			n=n/10;
		}
		cout<<c<<endl;
		t--;
	}
	return 0;
}
