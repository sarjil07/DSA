#include<iostream>
using namespace std;
int main()
{
	long long int t,a,b,c,sol;
	
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		sol=(a+b+c)-(min(a,min(b,c)));
		
/*		if((a>b)&&(c>b))
		{
			sol=a+c;
			
		}
		else if((b>a)&&(c>a))
		{
			sol=b+c;
		}
		else
		{
			sol=a+b;
		}
		*/
		cout<<sol<<"\n";
	}
	return 0;
}
