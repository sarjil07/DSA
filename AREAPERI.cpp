#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int l,b;
	long long int area,peri;
	cin>>l>>b;
	area=l*b;
	peri=2*(l+b);
	if(area>peri)
	{
		cout<<"Area"<<"\n";
		cout<<area;
		
	}
	else if(peri==area)
	{
		cout<<"Eq"<<"\n";
		cout<<area;
	}
	else
	{
		cout<<"Peri"<<"\n";
		cout<<peri;
	}
	return 0;
}
