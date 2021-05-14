#include<string>
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
	int t;
	double n,f;
	string s;
	cin>>t;
	while(t>0)
	{
		
		cin>>n;
		cin>>s;
		f=pow(2.0,n);
		cout<<f<<endl;
		t=t-1;
		
	}
	return 0;
}

