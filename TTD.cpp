#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,t,s,js,a;
	cin>>t;
	while(t--)
	{
		cin>>a>>n;
		s=pow(2,n-1);
		cout<<s;
		js=pow(a,s);
		cout<<js%10<<"\n";
	}
	return 0;
}
