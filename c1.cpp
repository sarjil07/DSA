#include<iostream>
using namespace std;
int main()
{
	int i;
	float j;
	cin>>i;
	cin>>j;
	if(i>j || (i%5!=0) || (j<0) )
	{
		cout<<j;
	}
	else if((i<(j-0.5) && (i%5==0)))
	{
		cout<<(j-i-0.50);
	}
	return 0;
}
