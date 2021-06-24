#include<iostream>
using namespace std;
int main()
{
	int t,n,m,s;
	cin>>t;
	while(t>0)
	{
		cin>>n;
		s=0;
		while(n!=0)
		{
			m=n%10;
			if(m==4)
			{
				s++;
			}
			n=n/10;
		}
		cout<<s<<"\n";
		t--;
	}
}
