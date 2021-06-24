#include<iostream>
using namespace std;
int main()
{
	int x;//x is variable, x is variable name
	cin>>x;
	int zero_even_fibonnaci=0;
	int first_even_fibonnaci=2;
	cout<<zero_even_fibonnaci<<" "<<first_even_fibonnaci<<" ";
	int a=0,b=2,c=2;
	//repeated task--> loops
	while(c<=x)
	{
		c=4*b+a;
		a=b;
		b=c;
		if(c>x)
		{
			break;
		}
		cout<<c<<" ";
	}
	
	return 0;
	
}
